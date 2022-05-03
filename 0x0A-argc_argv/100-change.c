#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name.
  * @argc: command line args counter.
  * @argv: stores command line args.
  *
  * Return: Zero, EXIT_SUCCESS.
  */
int main(int argc, char *argv[])
{
	int change, i, amt;
	int coins[5] = {25, 10, 5, 2, 1};

	amt = atoi(argv[argc - 1]);

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amt <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coins[i] <= amt)
			{
				change = change + (amt / coins[i]);
				amt = amt - (amt / coins[i]) * coins[i];
				if (amt == 0)
				{
					printf("%d\n", change);
					break;
				}
			}
		}
	}
	return (0);
}
