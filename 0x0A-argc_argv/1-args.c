#include <stdio.h>

/**
 * main - program that prints number of arguments
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
