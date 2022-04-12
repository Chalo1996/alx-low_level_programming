#ifndef ALPHABET_H
#define ALPHABET_H

/**
  * main - The Entry Point for C code.
  *
  * print_alphabet - prints alphabets in lowercase.
  *
  * Return: Success Exit Status.
  */
void print_alphabet(void)
{
	int c = 97;

	do {
		putchar(c);
		c++;
	} while (c <= 122);
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}

#endif
