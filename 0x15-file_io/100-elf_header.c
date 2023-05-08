#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define ERR_MSG "Error: Not an ELF file or an error occurred\n"
#define ELF_CLASS_STR(class) ((class) == ELFCLASS32 ? "ELF32" : "ELF64")
#define ELF_DATA_STR(data) ((data) == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian")
#define ELF_TYPE_STR(type) \
    ((type) == ET_NONE ? "NONE (No file type)" : \
     (type) == ET_REL ? "REL (Relocatable file)" : \
     (type) == ET_EXEC ? "EXEC (Executable file)" : \
     (type) == ET_DYN ? "DYN (Shared object file)" : \
     (type) == ET_CORE ? "CORE (Core file)" : \
     "Unknown")

void print_elf_header(Elf64_Ehdr *hdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%s", hdr->e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
    printf("  Class:                             %s\n", ELF_CLASS_STR(hdr->e_ident[EI_CLASS]));
    printf("  Data:                              %s\n", ELF_DATA_STR(hdr->e_ident[EI_DATA]));
    printf("  Version:                           %d (current)\n", hdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", hdr->e_ident[EI_OSABI] == 0 ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", hdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", ELF_TYPE_STR(hdr->e_type));
    printf("  Entry point address:               0x%lx\n", hdr->e_entry);
}

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr hdr;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    if ((fd = open(argv[1], O_RDONLY)) == -1) {
        perror("open");
        return 98;
    }

    if (read(fd, &hdr, sizeof(hdr)) != sizeof(hdr)) {
        perror("read");
        return 98;
    }

    if (hdr.e_ident[EI_MAG0] != ELFMAG0 || hdr.e_ident[EI_MAG1] != ELFMAG1 ||
            hdr.e_ident[EI_MAG2] != ELFMAG2 || hdr.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, ERR_MSG);
        return 98;
    }

    print_elf_header(&hdr);
    close(fd);

    return 0;
}
