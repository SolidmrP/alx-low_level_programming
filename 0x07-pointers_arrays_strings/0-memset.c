#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: constant byte to fill
 * @n: bytes of memory area to be filled
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
