#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer
 * @n: an int var
 * Description: numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * you can only use _putchar to print.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
