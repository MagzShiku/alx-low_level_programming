#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the name of new file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success
 * -1 on failure file can not be created,
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_dir;
	ssize_t text_x;
	ssize_t _written;

	file_dir = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_dir == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_x = strlen(text_content);
		 _written = (write(file_dir, text_content, text_x));

		if (_written == -1 || _written != text_x)
		{
			close(file_dir);
			return (-1);
		}
	}
	close(file_dir);
	return (1);
}
