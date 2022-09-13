#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: character to test
 * Return: 1 if n > 0, 0 if n = 0,
 * and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_Putchar('-');
		return (-1);
	}
	else
	{
		_putchar(' ');
		return ('!');
	}
}
