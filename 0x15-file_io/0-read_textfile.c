#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - reads a text file and prints it to
  *                 the POSIX standard output.
  * @filename: pointer to the file.
  * @letters: size of the buffer.
  *
  * Return: buffer.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, f_print, f_read, f_close;
	char *buf;

	file = f_print = f_read = 0;

	buf = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	f_read = read(file, buf, letters);

	if (f_read == -1)
		return (0);

	f_print = write(STDOUT_FILENO, buf, f_read);

	if (f_print == -1)
		return (0);

	f_close = close(file);

	if (f_close == -1)
		return (0);

	free(buf);
	return (f_read);
}
