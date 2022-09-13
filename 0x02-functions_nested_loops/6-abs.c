#include "main.h"

/**
 * _abs - it computes the absolute number 
 * of an integer
 * @i: character to test with
 * Return: the absolute value of an int
 */
int _abs(int i)
{

	if (i < 0)
		i = i * -1;
	return (i);
}
