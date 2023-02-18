#include <stdio.h>

/**
 * main - Entry point
 * Program that prints base 10 numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
