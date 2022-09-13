#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: character to test
 * Return: k successful
 */
int print_last_digit(int n)
{
	int j, k;

	j = n % 10;
	if (j < 0)
		j = -j;
	k = '0' + j;
	_putchar(k);
	return (j);
}
