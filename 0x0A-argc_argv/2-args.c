#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
