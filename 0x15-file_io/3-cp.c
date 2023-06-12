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
	int file_from;
	int file_to;
	ssize_t _read;
	ssize_t _written;
	char buff[BUFF_SZ];
	struct stat my_struct;

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT
			| O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IROTH);
	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to");

	if (file_from == -1)
		print_error(98, "Error: Can't read from file");
	if (file_to == -1)
		print_error(99, "Error: Can't write to file");

	while ((_read = read(file_from, buff, BUFF_SZ)) > 0)
	{
		_written = write(file_to, buff, _read);
		if (_written == -1 || _written != _read)
		{
			print_error(99, "Error: Can't write to file");
		}
	}
	if (_read == -1)
		print_error(98, "Error: Can't read from file");
	/**
	 * function is a system call in C that retrieves
	 * information about an open file referenced by its descrtpt
	 */
	if (fstat(file_to, &my_struct) == -1)
		print_error(99, "Error: Can't write to file");
	if (close(file_from) == -1)
		print_error(100, "Error: Can't close file descriptor");
	if (close(file_to) == -1)
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
	exit(funct_end);
}
