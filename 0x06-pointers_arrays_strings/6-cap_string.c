#include "main.h"

/**
  * cap_string - Capitalize all words of a string.
  * @c: The string to capitalize.
  *
  * Return: Capitalized string address.
  */
char *cap_string(char *c)
{
	int i, j, k, strln = 0;
	char a[] = ",;. !?\"(){}\t\n";

	for (k = 0; a[k] != '\0'; k++)
	{
		strln++;
	}

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			if (i == 0)
			{
				*(c + i) -= 32;
			}
			else
			{
				for (j = 0; j <= strln; j++)
				{
					if (c[i - 1] == a[j])
					{
						c[i] -= 32;
					}
				}
			}
		}
	}
	return (c);
}
