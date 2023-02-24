#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int h;

	for (i = 0; i < 10; i++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h >= 10)
				putchar('1');
		putchar(h % 10 + '0');
		}
		putchar('\n');
	}
}
