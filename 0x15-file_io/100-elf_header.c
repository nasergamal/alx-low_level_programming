#include "main.h"
#include <elf.h>
#include <string.h>

/**
 * verify - verify that the file is of elf type
 * @e_ident: pointer to elf struct
 *
 * Return: void
 */
void verify(unsigned char *e_ident)
{
	if (e_ident[0] == 0x7f && e_ident[1] == 'E'
	&& e_ident[2] == 'L' && e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}
/**
 * magic - print magic number
 * @e_ident: pointer to elf struct
 *
 * Return: void
 */
void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * class_data - print class and data(endianess)
 * @e_ident: pointer to elf struct
 *
 * Return: void
 */
void class_data(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid.\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);

	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format.\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}
/**
 * version_op - print version and operation system
 * @e_ident: pointer to elf struct
 *
 * Return: void
 */
void version_op(unsigned char *e_ident)
{
	printf("  Version:                           %i", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	printf("\n");
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case (ELFOSABI_SYSV):
		printf("UNIX - System V\n");
		break;
	case (ELFOSABI_HPUX):
		printf("UNIX - HP-UX\n");
		break;
	case (ELFOSABI_NETBSD):
		printf("UNIX - NetBSD\n");
		break;
	case (ELFOSABI_LINUX):
		printf("UNIX - Linux\n");
		break;
	case (ELFOSABI_SOLARIS):
		printf("UNIX - Solaris\n");
		break;
	case (ELFOSABI_IRIX):
		printf("UNIX - IRIX\n");
		break;
	case (ELFOSABI_FREEBSD):
		printf("UNIX - FreeBSD\n");
		break;
	case (ELFOSABI_TRU64):
		printf("UNIX - TRU64\n");
		break;
	case (ELFOSABI_ARM):
		printf("ARM\n");
		break;
	case (ELFOSABI_STANDALONE):
		printf("Stand-alone\n");
		break;
	default:
		printf("<unknown: %x\n>", e_ident[EI_OSABI]);
		break; }
}


/**
 * type_entrypoint - print file type and entrypoint
 * @type: type
 * @e_ident: pointer to elf struct
 * @entry: entrypoint
 * Return: void
 */

void type_entrypoint(unsigned int type, unsigned char *e_ident
		, unsigned long int entry)
{
	printf("  Type:                              ");
	switch (type)
	{
	case (ET_NONE):
		printf("NONE (None)\n");
		break;
	case (ET_REL):
		printf("REL (Relocatable file)\n");
		break;
	case (ET_EXEC):
		printf("EXEC (Executable file)\n");
		break;
	case (ET_DYN):
		printf("DYN (Shared object file)\n");
		break;
	case (ET_CORE):
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
		break;
	}

	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		entry = __builtin_bswap64(entry);
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * main - print elf header
 * @ac: argument count
 * @av: pointer to arguments
 *
 * Return: (0)on success
 */

int main(int ac, char *av[])
{
	int fp, rd, cl;
	Elf64_Ehdr *el;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: wrong number of args\n");
		exit(98);
	}
	el = malloc(sizeof(Elf64_Ehdr));
	if (el == NULL)
		dprintf(STDERR_FILENO, "failed to allocate memory\n"), exit(98);
	fp = open(av[1], O_RDONLY);
	rd = read(fp, el, sizeof(Elf64_Ehdr));
	if (fp == -1 || rd == -1)
	{
		free(el);
		dprintf(STDERR_FILENO, "Error: failed to read from file %s\n", av[1]);
		exit(98);
	}
	verify(el->e_ident);
	magic(el->e_ident);
	class_data(el->e_ident);
	version_op(el->e_ident);
	printf("  ABI Version:                       %i\n",
		el->e_ident[EI_ABIVERSION]);
	type_entrypoint(el->e_type, el->e_ident, el->e_entry);
	cl = close(fp);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: falied to close file %i\n", fp);
		exit(98);
	}
	free(el);
	return (0);
}
