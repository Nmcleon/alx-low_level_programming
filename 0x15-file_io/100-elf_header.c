#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define ELF_MAGIC_SIZE 4

/* Structure representing the ELF header */
typedef struct {
    unsigned char   e_ident[ELF_MAGIC_SIZE]; /* ELF magic number */
    uint16_t        e_type;                  /* Object file type */
    uint16_t        e_machine;               /* Architecture */
    uint32_t        e_version;               /* Object file version */
    uint64_t        e_entry;                 /* Entry point address */
    uint64_t        e_phoff;                 /* Program header offset */
    uint64_t        e_shoff;                 /* Section header offset */
    uint32_t        e_flags;                 /* Processor-specific flags */
    uint16_t        e_ehsize;                /* ELF header size */
    uint16_t        e_phentsize;             /* Size of program header entry */
    uint16_t        e_phnum;                 /* Number of program header entries */
    uint16_t        e_shentsize;             /* Size of section header entry */
    uint16_t        e_shnum;                 /* Number of section header entries */
    uint16_t        e_shstrndx;              /* Section name string table index */
} Elf64_Ehdr;

/* Function to display the ELF header */
void display_elf_header(const Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x\n", header->e_ident[0], header->e_ident[1],
           header->e_ident[2], header->e_ident[3]);
    printf("  Class:                             ");
    switch (header->e_ident[4]) {
        case 1:
            printf("ELF32\n");
            break;
        case 2:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Data:                              ");
    switch (header->e_ident[5]) {
        case 1:
            printf("2's complement, little endian\n");
            break;
        case 2:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Version:                           %u (current)\n", header->e_ident[6]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[7]) {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 53:
            printf("<unknown: 53>\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  ABI Version:                       %u\n", header->e_ident[8]);
    printf("  Type:                              ");
    switch (header->e_type) {
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    /* Open the ELF file */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Unable to open file '%s'\n", argv[1]);
        exit(98);
    }

    /* Read the ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, "Error: Unable to read ELF header\n");
        close(fd);
        exit(98);
    }

    /* Check if the file is an ELF file */
    if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' ||
        header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "Error: File '%s' is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    /* Display the ELF header */
    display_elf_header(&header);

    /* Close the file */
    close(fd);

    return 0;
}
