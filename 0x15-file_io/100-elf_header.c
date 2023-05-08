#include <stdio.h>
#include <elf.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    Elf64_Ehdr header;
    FILE *file = fopen(argv[1], "rb");
    if (!file) {
        fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
        exit(98);
    }

    if (fread(&header, sizeof(header), 1, file) != 1) {
        fprintf(stderr, "Error: could not read ELF header\n");
        exit(98);
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }

    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class:   %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

    printf("Version: %d\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI:  ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:      printf("UNIX System V ABI\n"); break;
        case ELFOSABI_HPUX:      printf("HP-UX ABI\n"); break;
        case ELFOSABI_NETBSD:    printf("NetBSD ABI\n"); break;
        case ELFOSABI_LINUX:     printf("Linux ABI\n"); break;
        case ELFOSABI_SOLARIS:   printf("Solaris ABI\n"); break;
        case ELFOSABI_AIX:       printf("AIX ABI\n"); break;
        case ELFOSABI_IRIX:      printf("IRIX ABI\n"); break;
        case ELFOSABI_FREEBSD:   printf("FreeBSD ABI\n"); break;
        case ELFOSABI_TRU64:     printf("Compaq TRU64 UNIX ABI\n"); break;
        case ELFOSABI_MODESTO:   printf("Novell Modesto ABI\n"); break;
        case ELFOSABI_OPENBSD:   printf("OpenBSD ABI\n"); break;
        case ELFOSABI_ARM_AEABI: printf("ARM EABI\n"); break;
        case ELFOSABI_ARM:       printf("ARM\n"); break;
        case ELFOSABI_STANDALONE:printf("Standalone (embedded) ABI\n"); break;
        default:                 printf("Unknown ABI\n"); break;
    }

    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

    printf("Type:    ");
    switch (header.e_type) {
        case ET_NONE: printf("No file type\n"); break;
        case ET_REL:  printf("Relocatable file\n"); break;
        case ET_EXEC: printf("Executable file\n"); break;
        case ET_DYN:  printf("Shared object file\n"); break;
        case ET_CORE: printf("Core file\n"); break;
        default:      printf("Unknown file type\n"); break;
    }

    printf("Entry point address: 0x%lx\n", header.e
