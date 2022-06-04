#include <stdio.h>
/**
 * main - ENTRY point
 *
 * Return: 0 (success)
*/
int main()
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
