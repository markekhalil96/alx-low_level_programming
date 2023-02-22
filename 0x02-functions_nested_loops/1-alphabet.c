#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	/* Print each letter of the alphabet using _putchar */
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	/* Print a newline character using _putchar */
	_putchar('\n');
}
