#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: number or 1
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int mul = a * b;

	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
