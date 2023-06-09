#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: character that fills memory area
 * @n: number of characters filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
