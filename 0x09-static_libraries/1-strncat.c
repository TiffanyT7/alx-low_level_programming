#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination where string to be copied to
 * @src: string that is copied
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}
