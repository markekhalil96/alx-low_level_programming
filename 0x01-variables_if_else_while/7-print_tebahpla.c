#include <stdio.h>

/**
 * main - Prints lower case alphabet except q & e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[24] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 24; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
