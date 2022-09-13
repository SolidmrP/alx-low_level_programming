#include "main.h"

/**
 * main - Entry point
 *
 * description - prints the alphabets in lowercase
 *
 * return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
