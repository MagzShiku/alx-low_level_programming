#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>


#define BUFF_SZ 1024
#define BUFF_SZ 64

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int funct_end, const char *error_msg);
void print_error(const char *error_msg);
void print_content_elf_header_elf_file(Elf64_Ehdr *elf_header);

#endif /* MAIN_H */
