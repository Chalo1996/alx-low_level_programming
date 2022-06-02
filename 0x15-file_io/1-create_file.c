#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_file - creates a file.
  * @filename: pointer to file.
  * @text_content: buffer.
  *
  * Return: 1 or -1
  */
int create_file(const char *filename, char *text_content)
{
	int file, f_len, f_close;

	f_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[f_len])
			f_len++;
		write(file, text_content, f_len);
	}

	f_close = close(file);
	if (f_close == -1)
		return (-1);

	return (1);
}
