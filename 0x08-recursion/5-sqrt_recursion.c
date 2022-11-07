#include "main.h"

/**
 * sqrt2 - makes it possible to evaluate from 1 to n
 * @a: same as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 on success
 * on error -1 and errno is set
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: num integer
 *
 * Return: 1 on success
 * on error -1 and errno is set
 */
int _sqrt_rcursion(int n)
{
	return (sqrt2(n, 1));
}
