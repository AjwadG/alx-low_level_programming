#include "main.h"
#include <elf.h>
/**
 * magic - print magic numbers
 * @head: struct Elf64_Ehdr
 */
void magic(Elf64_Ehdr head)
{
	int i = 0, l = EI_NIDENT;

	printf("  Magic:   ");
	for (i = 0; i < l; i++)
	{
		printf("%2.2x%c", head.e_ident[i], i == l - 1 ? '\n' : ' ');
	}
}
/**
 * class - print class
 * @head: struct Elf64_Ehdr
 */
void class(Elf64_Ehdr head)
{
	printf("  %-34s ", "Class:");
	if (head.e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else if (head.e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (head.e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
}
/**
 * data - print data
 * @head: struct Elf64_Ehdr
 */
void data(Elf64_Ehdr head)
{
	printf("  %-34s ", "Data:");

	if (head.e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (head.e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (head.e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
}
/**
 * version - print version
 * @head: struct Elf64_Ehdr
 */
void version(Elf64_Ehdr head)
{
	printf("  Version:                           %d",
			head.e_ident[EI_VERSION]);
	if (head.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("%s\n", "");

}
/**
 * abi - print os adn abi
 * @head: struct Elf64_Ehdr
 */
void abi(Elf64_Ehdr head)
{
	int os_abi = head.e_ident[EI_OSABI];
	char *os[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (os_abi < 19)
		printf("%s\n", os[os_abi]);
	else
		printf("<unknown: %x>\n", os_abi);
}
/**
 * abi_version - print version
 * @head: struct Elf64_Ehdr
 */
void abi_version(Elf64_Ehdr head)
{
	int i = EI_ABIVERSION;

	printf("  %-35s%d\n", "ABI Version:", head.e_ident[i]);
}
/**
 * type - print type
 * @head: struct Elf64_Ehdr
 */
void type(Elf64_Ehdr head)
{
	char ET = (char) head.e_type;

	printf("  %-34s ", "Type:");
	if (ET == ET_CORE)
		printf("CORE (Core file)\n");
	else if (ET == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (ET == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (ET == ET_EXEC || ET == ET_NONE)
		printf("EXEC (Executable file)\n");
	else
		printf("<unknown>: %x\n", ET);
}
/**
 * entry - print entry
 * @head: struct Elf64_Ehdr
 */
void entry(Elf64_Ehdr head)
{
	int i = 0, len = 0, val;
	unsigned char *p = (unsigned char *) &head.e_entry;

	printf("  %-34s 0x", "Entry point address:");
	if (head.e_ident[EI_DATA] == ELFDATA2MSB)
		len = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
	else
		i = head.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
	val = i == 0 ? 1 : -1;

	while (!p[i])
		i += val;
	printf("%x", p[i]);
	i += val;
	while (i != len + val)
	{
		printf("%02x", p[i]);
		i += val;
	}
	printf("\n");
}
/**
 * elf_head - print magic numbers
 * @head: struct Elf64_Ehdr
 */
void elf_head(Elf64_Ehdr head)
{
	if (head.e_ident[0] != 0x7f || head.e_ident[1] !=
			0x45 || head.e_ident[2] != 0x4c ||
			head.e_ident[3] != 0x46)
	{
		dprintf(STDERR_FILENO, "Not ELF file\n");
		exit(98);
	}
	printf("ELF Header:\n");
}
/**
 * main - check the code
 * @ac: number of args
 * @av: a pointer to string pointers
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd, p;
	Elf64_Ehdr head;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}
	p = read(fd, &head, sizeof(head));
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	elf_head(head);

	magic(head);
	class(head);
	data(head);
	version(head);
	abi(head);
	abi_version(head);
	type(head);
	entry(head);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "can not close File %s\n", av[1]);
		exit(98);
	}
	return (0);
}
