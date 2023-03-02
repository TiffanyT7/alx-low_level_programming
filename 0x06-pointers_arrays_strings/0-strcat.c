#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination where string to be appended to
 * @src: string that is appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a,b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
