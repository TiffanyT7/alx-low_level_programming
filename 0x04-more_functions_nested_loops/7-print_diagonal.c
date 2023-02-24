#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
