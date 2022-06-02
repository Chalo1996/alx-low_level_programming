#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * main - copies the content of a file to another file.
  * @argc: number of arguments stored in argv.
  * @argv: the arguments.
  *
  * Return: Always Success.
  */
int main(int argc, char *argv[])
{
	int file, f_wrt, f_close, f_wt, f_rd;
	char BUFFSIZE[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_wrt = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (f_wrt == -1)
		dprintf(STDERR_FILENO, ERR, argv[2]), exit(99);
	file = open(argv[1], O_RDONLY);

	if (file == -1)
		dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);

	while (1)
	{
		f_rd = read(file, BUFFSIZE, 1024);
		if (f_rd == -1)
			dprintf(STDERR_FILENO, ERROR, argv[1]), exit(98);
		if (f_rd > 0)
		{
			f_wt = write(f_wrt, BUFFSIZE, f_rd);
			if (f_wt == -1)
				dprintf(STDERR_FILENO, ERR, argv[2]), exit(99);
		} else
			break;
	}
	f_close = close(file);

	if (f_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
	f_close = close(f_wrt);

	if (f_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_wrt), exit(100);

	return (0);
}
