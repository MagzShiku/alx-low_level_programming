#include "main.h"

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
void print_error(const char *error_msg);
void print_content_elf_header_elf_file(Elf64_Ehdr *elf_header);