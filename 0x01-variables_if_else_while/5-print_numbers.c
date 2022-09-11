#include <stdio.h>

/**
 * main - print all single numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
