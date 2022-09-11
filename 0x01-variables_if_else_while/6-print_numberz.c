#include <stdio.h>

/**
 * main - print all numbers of base 10
 *
 * Return: always 0 (success)
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
