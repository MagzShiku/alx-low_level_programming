#include "main.h"


void print_error(int funct_end, const char *error_msg);

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
	int i;
	int j;
	int k;
	int l;
	char buff[BUFF_SZ];
	
	if (argc != 3)
		print_error(97, "Error: Usage: cp file_from file_to");

	j = open(argv[1], O_RDONLY);
	if (j == -1)
		print_error(98, "Error: Can't read from file_from");

	i = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (i == -1)
		print_error(99, "Error: Can't write to file_to");

	do{
		k = read(j, buff, BUFF_SZ);
		if (k == -1)
			print_error(98, "Error: Can't read from file");

		l = write(i, buff, k);
		if (l == -1 || l != k)
			print_error(99, "Error: Can't write to file");
	} while (l >= BUFF_SZ);

	if (close (i) == -1)
		print_error(100, "Error: Can't close file descriptor");

	if (close (j) == -1)
		print_error(100, "Error: Can't close file descriptor");

	return (0);
}

/**
 * print_error - Helper function to print error ans exit
 * @funct_end: end the function
 * @error_msg: error message
 */
void print_error(int funct_end, const char *error_msg)
{
	dprintf(STDERR_FILENO, "%s\n", error_msg);
	exit((int)funct_end);
}
