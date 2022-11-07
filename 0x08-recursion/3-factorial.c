#include "main.h"

/**
 * factorial - gets the factorial of n
 * @n: integer
 *
 * Return: 1 on success
 * on error, -1 is returned and errno set appropriately
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
