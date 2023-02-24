#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	for (n = 1; n <= 10; n++)
	{
		putchar('_');
		if (n <= 0)
		putchar('\n');
	}
	putchar('\n');
}
