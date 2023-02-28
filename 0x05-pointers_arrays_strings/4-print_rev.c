#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 * Return: str in reverse
 */
void print_rev(char *s)
{
	int r;

	for (r = 0; s[r] != '\0' ; r++)
		;
	for (r = r - 1; s[r] != '\0'; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
