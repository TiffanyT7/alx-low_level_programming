#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: integer or 1 for error
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
