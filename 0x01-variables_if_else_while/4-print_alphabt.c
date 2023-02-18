#include <stdio.h>

/**
 * main - Entry point
 * Program that prints the alphabet, except e and q, in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x, e, q;

	e = 'e';
	q = 'q';

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != e && x != q)
	putchar(x);
	}
	putchar('\n');
	return (0);
}
