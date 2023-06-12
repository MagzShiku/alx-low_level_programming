#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to
 * add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_dir;
	ssize_t text_x;
	ssize_t _written;

	file_dir = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (file_dir == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_x = strlen(text_content);
		_written = write(file_dir, text_content, text_x);

		if (_written == -1 || _written != text_x)
		{
			close(file_dir);
			return (-1);
		}

	}

	close(file_dir);
	return (1);
}
