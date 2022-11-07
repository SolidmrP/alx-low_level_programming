#include "main.h"

/**
 * prime2 - makes it possible to evaluate from 1 - n
 * @a: same number as n
 * @b: number that iterates from 1 - n
 *
 * Return: 1 on success
 * on error -1 and errno is set
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_numbers - checks for prime number
 * @n: num integer
 *
 * Return: 1 on success
 * on error -1 and errno is set
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
