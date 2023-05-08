#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

void typeface_version(unsigned char *recog);
void typeface_data(unsigned char *recog);
void typeface_class(unsigned char *recog);
void scan_elf(unsigned char *recog);
void typeface_magic(unsigned char *recog);
void typeface_type(unsigned int x, unsigned char *recog);
void typeface_entry(unsigned long int y, unsigned char *recog);
void typeface_abi(unsigned char *recog);
void typeface_osabi(unsigned char *recog);
void end_elf(int j);

/**
 * scan_elf - scan if its an elf file
 * @recog: pointer to an array
 * Return: void
 */
void scan_elf(unsigned char *recog)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (recog[x] != 127 &&
				recog[x] != 'E' &&
				recog[x] != 'L' &&
				recog[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * typeface_magic - write magic number
 * @recog: pointer to an array
 * Return: void
 */
void typeface_magic(unsigned char *recog)
{
	int x;

	printf("Magic: ");
	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", recog[x]);
		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * typeface_class - write class
 * @recog: a pointer to array
 * Return: void
 */
void typeface_class(unsigned char *recog)
{
	printf("Class:   ");
		switch (recog[EI_CLASS])
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
				printf("<unknown: %x>\n", recog[EI_CLASS]);
		}
}
/**
 * typeface_data - write the data
 * @recog: poinetr to array
 * Return: void
 */
void typeface_data(unsigned char *recog)
{
	printf("Data:  ");
	switch (recog[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, bit endian\n");
			break;
		default:
			printf("<unknown: %x>\n", recog[EI_CLASS]);
	}
}
/**
 * typeface_version - write version
 * @recog: a pointer to an array
 * Return: void
 */
void typeface_version(unsigned char *recog)
{
	printf("Version: %d", recog[EI_VERSION]);
	switch (recog[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * typeface_osabi - write OS/ABI
 * @recog: pointer to array
 * Return: void
 */
void typeface_osabi(unsigned char *recog)
{
	printf(" OS/ABI: ");
	switch (recog[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("INIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX -NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("INIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX -FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", recog[EI_OSABI]);
	}
}
/**
 * typeface_abi - write the ABI
 * @recog: a pointer to array
 * Return: void
 */
void typeface_abi(unsigned char *recog)
{
	printf(" ABI Version: %d\n", recog[EI_ABIVERSION]);
}
/**
 * typeface_type - write the type
 * @x: ELF type
 * @recog: a pointer to array
 * Return: void
 */
void typeface_type(unsigned int x, unsigned char *recog)
{
	if (recog[EI_DATA] == ELFDATA2MSB)
		x >>= 8;
	printf(" Type: ");
	switch (x)
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
			printf("<unknown: %x>\n", x);
	}
}
/**
 * typeface_entry - write the entry
 * @y: the address
 * @recog: a pointer to array
 * Return: void
 */
void typeface_entry(unsigned long int y, unsigned char *recog)
{
	printf("Entry point address: ");
	if (recog[EI_DATA] == ELFDATA2MSB)
	{
		y = ((y << 8) & 0xFF00FF00) | ((y >> 8) & 0xFF00FF);
		y = (y << 16) | (y >> 16);
	}
	if (recog[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)y);
	else
		printf("%#lx\n", y);
}
/**
 * end_elf - close ELF file
 * @j: the descriptor
 */
void end_elf(int j)
{
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can'r close file %d\n", j);
		exit(98);
	}
}
/**
 * main - display information in ELF file
 * @argc: srguments number
 * @argv: an array vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hdr;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
	{
		end_elf(i);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	j = read(i, hdr, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(hdr);
		end_elf(i);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	scan_elf(hdr->e_ident);
	printf("ELF Header:\n");
	typeface_magic(hdr->e_ident);
	typeface_class(hdr->e_ident);
	typeface_data(hdr->e_ident);
	typeface_version(hdr->e_ident);
	typeface_osabi(hdr->e_ident);
	typeface_abi(hdr->e_ident);
	typeface_type(hdr->e_type, hdr->e_ident);
	typeface_entry(hdr->e_entry, hdr->e_ident);
	free(hdr);
	end_elf(i);
	return (0);
}
