#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 * @argc: argument count
 * @argv: argument vector
 * Return: an int
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
