#include <stdio.h>

/**
 * main - Entry point
 * Program that prints alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a', y ='A';
		
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
