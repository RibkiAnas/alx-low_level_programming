#include <stdio.h>
#include "main.h"
#include <elf.h>
#include <string.h>

#if defined (__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

void print_magic(unsigned char e_ident[EI_NIDENT])
{
	int i;
	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

void print_class(unsigned char e_ident[EI_NIDENT])
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("Invalid class\n");
		break;
		case ELFCLASS32: printf("ELF32\n");
		break;
		case ELFCLASS64: printf("ELF64\n");
		break;
		default: printf("Unknown class\n");
		break;
  }
}

void print_data(unsigned char e_ident[EI_NIDENT]) {
  printf("Data: ");
  switch (e_ident[EI_DATA]) {
    case ELFDATANONE: printf("Invalid data encoding\n"); break;
    case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
    case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
    default: printf("Unknown data encoding\n"); break;
  }
}

void print_version(unsigned char e_ident[EI_NIDENT]) {
  printf("Version: ");
  switch (e_ident[EI_VERSION]) {
    case EV_NONE: printf("Invalid version\n"); break;
    case EV_CURRENT: printf("%d (current)\n", EV_CURRENT); break;
    default: printf("Unknown version\n"); break;
  }
}

void print_osabi(unsigned char e_ident[EI_NIDENT]) {
  printf("OS/ABI: ");
  switch (e_ident[EI_OSABI]) {
    case ELFOSABI_NONE: printf("UNIX System V ABI\n"); break;
    case ELFOSABI_HPUX: printf("HP-UX\n"); break;
    case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
    case ELFOSABI_LINUX: printf("Linux\n"); break;
    case ELFOSABI_SOLARIS: printf("Sun Solaris\n"); break;
    case ELFOSABI_IRIX: printf("SGI Irix\n"); break;
    case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
    case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
    case ELFOSABI_ARM: printf("ARM\n"); break;
    case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n"); break;
    default: printf("Unknown OS/ABI\n"); break;
  }
}

void print_abiversion(unsigned char e_ident[EI_NIDENT]) {
  printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(ElfW(Half) e_type) {
  printf("Type: ");
  switch (e_type) {
    case ET_NONE: printf("No file type\n"); break;
    case ET_REL: printf("Relocatable file\n"); break;
    case ET_EXEC: printf("Executable file\n"); break;
    case ET_DYN: printf("Shared object file\n"); break;
    case ET_CORE: printf("Core file\n"); break;
    default: printf("Unknown type\n"); break;
  }
}

void print_entry(ElfW(Addr) e_entry) {
  printf("Entry point address: %#lx\n", e_entry);
}

void read_elf_header(const char* elf_file) {

  ElfW(Ehdr) header;
  FILE* file = fopen(elf_file, "rb");
  size_t nread = fread(&header, sizeof(header), 1, file);

  if (file == NULL) {
    fprintf(stderr, "Cannot open file %s\n", elf_file);
    exit(98);
  }


  if (nread != 1) {
    fprintf(stderr, "Cannot read header from file %s\n", elf_file);
    exit(98);
  }

  if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
    fprintf(stderr, "File %s is not a valid ELF file\n", elf_file);
    exit(98);
  }

  print_magic(header.e_ident);
  print_class(header.e_ident);
  print_data(header.e_ident);
  print_version(header.e_ident);
  print_osabi(header.e_ident);
  print_abiversion(header.e_ident);
  print_type(header.e_type);
  print_entry(header.e_entry);

  fclose(file);
}

int main(int argc, char *argv[]) {
  
  char *elf_file = argv[1];
	if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(98);
  }

  read_elf_header(elf_file);

  return 0;
}
