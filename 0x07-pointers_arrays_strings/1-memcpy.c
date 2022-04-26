#include "main.h"

/**
  * _memcpy - copies memory area.
  * @dest: memory are to copy to.
  * @src: memory area to copy.
  * @n: bytes to copy.
  *
  * Return: pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
