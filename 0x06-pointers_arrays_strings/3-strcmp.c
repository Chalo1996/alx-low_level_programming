#include "main.h"

/**
  */
int _strcmp(char *s1, char *s2)
{
	int i, j, len_s1 = 0, len_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}

	if (len_s1 == len_s2)
	{
		return (0);
	}

	else if((len_s1) > (len_s2))
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
