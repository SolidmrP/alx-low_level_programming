#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 * @s: string
 *
 * Return: 1 on success
 * on error, -1 is returned and errno is set appropriately
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
