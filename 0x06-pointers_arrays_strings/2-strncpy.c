#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest string
 * @dest: string to copy into
 * @src: string being copied
 * @n: largest num of bytes to copy
 * Return: dest address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
