#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: NULL
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, index;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY, 00664);
	if (fd == -1)
		return (-1);

	index = 0;
	while (text_content[index])
	{
		index++;
		count++;
	}

	write(fd, text_content, count);

	close(fd);
	return (1);
}
