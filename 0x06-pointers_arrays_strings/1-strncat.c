#include "main.h"

/**
 * *_strncat - appends src to dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest num of bytes to append
 *Return: dest address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + i))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
