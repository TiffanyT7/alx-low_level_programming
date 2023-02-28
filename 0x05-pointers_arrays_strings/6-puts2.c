#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be checked
 * Return: characters of string
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
