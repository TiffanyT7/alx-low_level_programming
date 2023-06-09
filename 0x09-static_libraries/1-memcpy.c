#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
