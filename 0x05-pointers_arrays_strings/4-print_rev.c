#include "main.h"

/**
 * print_rev - Prints a string in reverse order to stdout
 * @s: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
