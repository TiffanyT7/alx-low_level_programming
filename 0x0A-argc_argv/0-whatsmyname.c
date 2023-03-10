#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
