#include "main.h"

/**
 * Prints the alphabet in lowercase followed by newline
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	/* Repeat the alphabet printing 10 times */
	while (i < 10)
	{
		letter = 'a';

		/* Print each letter of the alphabet using _putchar */
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		/* Print a newline character using _putchar */
		_putchar('\n');

		i++;
	}
}
