#include <stdio.h>

/**
 * main - Entry point
 * Program that prints the alphabet, except e and q, in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a', y = 'f', z = 'r';

	for (x = 'a'; x <= 'd'; x++)
	{
		putchar(x);
	}
	for (y = 'f'; y <= 'p'; y++)
	{
		putchar(y);
	}
	for (z = 'r'; z <= 'z'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
