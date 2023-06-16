#include "main.h"

#define BUFF_SZ 1024

void print_error_100(int file_descrpt, char *f_buffer);
char *mk_buffer(char *n);
/**
 * main - a program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: the new file with the content
 * Usage: cp file_from file_to
 * if the number of argument is not the correct one, exit with code 97
 * and print Usage: cp file_from file_to
 * followed by a new line, on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not
 * read it, exit with code 98
 * and print Error: Can't read from file NAME_OF_THE_FILE
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit with code 99
 * and print Error -> Can't write to NAME_OF_THE_FILE
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100
 * and print Error -> Can't close fd FD_VALUE, followed by a new line
 * on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 * Permissions of the created file -> rw-rw-r--.
 * If the file already exists, do not change the permissions
 * You must read 1,024 bytes at a time from the file_from
 * to make less system calls. Use a buffer
 * You are allowed to use dprintf
 */
int main(int argc, char *argv[])
{
	int f_from;
	int f_to;
	int f_read;
	int f_write;
	char *f_buffer;


	if (argc != 3) /* checks for cp, f_from, f_to */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_buffer = mk_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	f_read = read(f_from, f_buffer, BUFF_SZ);	
	do {
		
		if (f_from == -1 || f_read == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			free(f_buffer);
			exit(98);
		}


		f_write = write(f_to, f_buffer, f_read);
		if (f_to == -1 || f_write == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			free(f_buffer);
			exit(99);
		}
		f_read = read(f_from, f_buffer, BUFF_SZ);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f_read > 0);

	f_from = close(f_from);
	print_error_100(f_from, f_buffer);

	f_to = close(f_to);
	print_error_100(f_to, f_buffer);

	free(f_buffer);
	return (0);
}

/**
 * print_error_100 - Helper function to print error ans exit
 * @file_descrpt: file descriptor
 * @f_buffer: the buffer to hold the content
 */
void print_error_100(int file_descrpt, char *f_buffer)
{
	if (file_descrpt < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close file descriptor %d\n", file_descrpt);
		free(f_buffer);
		exit(100);
	}

}
 /**
 * mk_buffer -functio to make buffer
 * @n: the file name for buffer to store data
 * Return: 0
 *
 */

char *mk_buffer(char *n)
{
	char *f_buffer;

	f_buffer = malloc(sizeof(char) * 1024);
	if (!f_buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n);
		exit(99);
	}
	return (f_buffer);
}
