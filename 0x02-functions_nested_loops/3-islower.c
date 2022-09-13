#include "main.h"

/**
 * _islower - check for lowercase characters and
 * returns 1 if true or 0 if false
 * @c: character to test
 * Return: 1 if loweercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
