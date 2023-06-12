#include "main.h"

/**
 * read_textfile - reads a txt file and prints it onto POSIX stdo
 * @filename: the source file which will be opened using fopen()
 * @letters: function will read this
 * using fread()
 * Return: the actual number of letters it could read and print
 * write the content using fwrite()
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_directory;
	char *buff;
	ssize_t _read;
	ssize_t _written;


	if (filename == NULL)
		return (0);

	file_directory = open(filename, O_RDONLY);
	if (file_directory == -1)
		return (0);

	buff = ((char *)malloc(sizeof(char) * (letters + 1)));
	if (buff == NULL)
	{
		close(file_directory);
		return (0);
	}

	_read = read(file_directory, buff, letters);
	if (_read == -1)
	{
		free(buff);
		close(file_directory);
		return (0);
	}

	_written = write(STDOUT_FILENO, buff, _read);
	if (_written == -1 || _written != _read)
	{
		free(buff);
		close(file_directory);
		return (0);
	}

	free(buff);
	close(file_directory);
	return (_written);

}


