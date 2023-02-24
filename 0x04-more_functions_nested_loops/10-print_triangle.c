#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
