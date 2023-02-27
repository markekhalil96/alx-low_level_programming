#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
