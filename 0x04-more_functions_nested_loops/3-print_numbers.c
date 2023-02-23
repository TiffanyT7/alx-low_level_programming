#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
