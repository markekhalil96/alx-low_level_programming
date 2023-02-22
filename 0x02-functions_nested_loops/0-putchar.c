#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Call the write system call to print the string "_putchar\n" to stdout */
	write(1, "_putchar\n", 9);

	return (0);
}
