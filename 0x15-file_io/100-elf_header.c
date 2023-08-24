#include "main.h"
#include <unistd.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
/*
void print_osabi_more(Elf64_Ehdr header);
**
 * check_elf - this checks if a file is an ELF file
 * @e_ident - a pointer to an array containing ELF files/numbers
 *
 * Description: if the file is not ELF file- exit at 98.
 

void check_elf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 127 && e_ident[ind] != 'E' &&
		    e_ident[ind] != 'L' &&
		    e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
*/

/**
 * print_magic - this prints the magic numbers of an ELF Header
 * @e_ident: A pointer to an array containing the ELF magic numbers
 *
 * Description: Magic numbers are separated by spaces
 */

void print_magic(Elf64_Ehdr header)
{
	int ind;

	printf(" Magic: ");
		for (ind = 0; ind < EI_NIDENT; ind++)
		{
			printf("%2.2x%s", header.e_ident[ind]);

			if (ind == EI_NIDENT - 1)
				printf("\n");
			else
				printf(" ");
		}
}

/**
 * print_class - this will print the class of an ELF header
 * @e_ident: a pointer to the array of the ELF class
 */
void print_class(Elf64_Ehdr header)
{
	printf(" Class: ");

	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
	}
}

/**
 * print_data - this prints the data of an ELF header file
 * @e_ident: a pointer to the array of the ELF data
 */

void print_data(Elf64_Ehdr header)
{
	printf("Data: ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
			break
	}
}

/**
 * print_version - this prints the version of an ELF header
 * @e_ident: the pointer of an array of the ELF version
 */

void print_version(Elf64_Ehdr header)
{
	printf(" Version: 	%d", header.e_ident[EI_VERSION]);
	switch (header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - this prints the OS/ABI of the ELF header
 * @e_ident: the pointer to an array of the ELF VERSION
 */

void print_osabi(Elf64_Ehdr header)
{

	printf(" OS/ABI: ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>", header.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abi - this prints the ABI version of the ELF header
 * @e_ident: the pointer of the array of the ELF ABI version.
 */

void print_abi(Elf64_Ehdr header)
{
	printf(" ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - this prints the type of the ELF header
 * @e_type: the ELF type
 * @e_ident: the pointer to the array containing the ELF file/class
 */

void print_type(Elf64_Ehdr header)
{
	char *p = (char *)&header.e_type;
	int i = 0;

	printf(" Type:	");

	if (header.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", p[i]);
			break;
	}
}

/**
 * print_entry - prints the entry point of the ELF header
 * @e_entry: the address of the ELF entry point
 * @e_ident: a pointer to the array containing the ELF class/file
 */

void print_entry(Elf64_Ehdr header)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&header.entry;

	printf(" Entry point address: 	0x");
	if (header.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
	

/**
 * close_elf - Close the ELF file
 * @elf: the file descriptor of the ELF file
 *
 * Description: if the file can't close exit 98
 

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
*/

/**
 * main - this will display the information contain in the
 * ELF header at the start of ELF file
 * @argc: the number of argnuments passed to the program
 * @argv: the array of pointer to the arguments
 *
 * Return: 1 on Success 0 for failure.
 *
 * Description: if the file is not ELF or files exit at 98.
 */

int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	int _open;
       ssize_t _read;
       
       if (argc != 2)
	       dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), 
			exit(98);

	_open = open(argv[1], O_RDONLY);

	if (_open == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file: %s\n", argv[1]);
		exit(98);

	_read = read(_open, &header, sizeof(header));
			
	if (_read < 1 || _read != sizeof(header))
		dprintf(STDERR_FILENO, "Error: Can't read file: %s\n", argv[1]);
                exit(98);
	if (header.e_ident[0] == 0x7F && header.e_ident[1] == 'E'
		&& header.e_ident[2] == 'L' && header.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else 
	dprintf(STDERR_FILENO,"Not ELF File: %s\n", argv[1]);
                exit(98);

	/*check_elf(header);*/
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abi(header);
	print_type(header);
	print_entry(header);
}

/*	free(header);*/
	if (close_elf(_open))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", _open);
                exit(98);
	return (1);
}
