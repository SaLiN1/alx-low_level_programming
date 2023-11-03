#include "main.h"
#include <elf.h>
/**
* print_elf_header_info - Print information from the
* ELF header.
* @elf_header: A pointer to the ELF header
* Return: void nothing
*/
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
printf("ELF32\n");
else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
printf("ELF64\n");
printf("  Data:                              ");
if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
printf("2's complement, little endian\n");
else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
printf("2's complement, big endian\n");
printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (elf_header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX: printf("HP-UX\n"); break;
case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
default: printf("<unknown: %x>\n", elf_header->e_ident[EI_OSABI]); break;
}
printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (elf_header->e_type) {
case ET_NONE: printf("NONE (Unknown type)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %x>\n", elf_header->e_type); break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}
/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings
* Return: Return 0 on successful execution.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr elf_header;
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
return (98);
}
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", argv[1]);
close(fd);
return (98);
}
if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
close(fd);
return (98);
}
printf("ELF Header:\n");
print_elf_header_info(&elf_header);
close(fd);
return (0);
}

