#include "main.h"

/**
 * * print_line - a function that draws a straight line
 *  *@n: input number of lines to print '_'
 *   *Return: a straight line
 */
void print_line(int n)
{
	int co;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
