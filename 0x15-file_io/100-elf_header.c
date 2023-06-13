#include "main.h"

#define CODE_ERR 98
/**
 * Usage - elf_header elf_filename
 * Displayed information - (no less, no more, do 
 * not include trailing whitespace)
 * Magic
 * Class
 * Data
 * Version
 * OS/ABI
 * ABI Version
 * Type
 * Entry point address
 * Format - the same as readelf -h (version 2.26.1)
 * If the file is not an ELF file, or on error, 
 * exit with status code 98 and display a 
 * comprehensive error message to stderr
 * You are allowed to use lseek once
 * You are allowed to use read a maximum of 2 times at runtime
 * You are allowed to have as many functions 
 * as you want in your source file
 * You are allowed to use printf
 */

typedef struct {
	unsigned char e_ident[EI_NIDENT];/*how to interprete file */
	uint16_t e_type;/* IDs odject file type*/
	uint16_t e_machine;/* IDs required arch for a file*/
	uint32_t e_version;/* IDs the file version*/
	uint64_t e_entry;/*first control for system*/
	uint64_t e_phoff;/*holds header table*/
	uint64_t e_shoff;/*holds section header file*/
	uint32_t e_flags;/*holds processor spec flags*/
	uint16_t e_ehsize;/*holds ELF header size*/
	uint16_t e_phentsize;/*holds size of 1 entry of fl pgrm*/
	uint16_t e_phnum;/*no. of entries in pgrm hdr table*/
	uint16_t e_shentsize;/*holds section header size*/
	uint16_t e_shnum;/*holds no. of entries in section header*/
	uint16_t e_shstrndx;/*holds sect hdr indx of entry in sct*/
} ElfN_Ehdr;

/* lets display ELF(executanle and linkable format hdr info)*/
/**
 * show_elf_hdr_info - const ElfN_Ehdr 
 * ElfN_Ehdr: Parameter 1
 * elf_hdr: represents elf header structure
 * 1 display Magic number
 * 2 display elf class
 * 3 display elf data encoding
 * 4 display elf version
 * 5 display OD/ABI
 * 6 display the ABI version
 * 7 display ELF type
 * 8 disply the entry point address
 * checks fpr command line args
 */

void show_elf_hdr_info(const ElfN_Ehdr *elf_hdr)
{
	int i;
	
	printf("Magic: ");/*1*/
	for (i = 0, i < sizeof(elf_hdr->e_ident); i++)
	{
		printf("%02x ", elf_hdr->e_ident[i]);
	}
	printf("\n");

	/*2*/
	printf("Class: %d-bit\n", (elf_hdr->e_ident[4] == 1) ? 32 : 64);
	printf("Data: %s\n", (elf_hdr->e_ident[5]) == 1) ? "Little Endian" : "Big Endian";/*3*/
	printf("Version: %d\n", elf_hdr->e_version);/*4*/
	printf("OS/ABI Version: %d\n", elf_hdr-e_ident[7]);/*5*/
	printf("ABI Version: %d\n", elf_hdr->e_ident[8]);/*6*/
	printf("Type: %04x\n", elf_hdr->type);/*7*/
	printf("Entry point address: %lx\n", elf_hdr->e_entry);/*8*/
}
/**
 * main - function entry point
 * argc: checks fpr cpmmand line arguments
 * argv: checks fpr argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_dsc;
	ssize_t _read;
	ElfN_Ehdr elf_hdr;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (CODE_ERR);
	}

	file_dsc = open(argv[1], O_RDONLY);
	if (file_dsc == -1)
	{
		fprintf(stderr, "Error: Failed to open the file: %s\n", argv[1]);
		return (CODE_ERR)'
	}

	_read = read(file_dsc, &elf_hdr, sizeof(elf_hdr));
	if (_read != sizeof(elf_hdr))
	{
		fprintf(stderr, "Error: Failed to read the ELF header\n");
		close(file_dsc);
		return (CODE_ERR);
	}

	if (memcmp(elf_hdr.eident, "\x7f""ELF", 4) != 0)
	{
		fprintf(stderr, "Error: not an ELF file\n");
		close(file_dsc);
		return (CODE_ERR);
	}

show_elf_hdr_info(&elf_hdr);
close(file_dsc);
return (0);

}
