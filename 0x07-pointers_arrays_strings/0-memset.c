#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area 
 * @b: character that fills memory area
 * @n: number of characters filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char a[95] = {0x01};

	b = 50;
	for (b = 0; b <= 50; b++)
	{
		_putchar('-');
	}
	n = 95;
	for (n = 0; n <= 95; n++)
	{
		_putchar(a[95]);
	}
	_putchar('\n');

	return (s);
}
