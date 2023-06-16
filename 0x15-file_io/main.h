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


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_100(int file_descrpt, char *f_buffer);
char *mk_buffer(char *n);
void print_content_elf_header_elf_file(Elf64_Ehdr *elf_header);

#endif /* MAIN_H */
