#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: pointer to file.
  * @text_content: buffer.
  *
  * Return: 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, f_len, f_wrt;

	f_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[f_len])
			f_len++;
		f_wrt = write(file, text_content, f_len);

		if (f_wrt == -1)
			return (-1);
	}
	close(file);
	return (1);
}
