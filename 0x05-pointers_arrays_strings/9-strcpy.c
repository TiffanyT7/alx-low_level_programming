#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies string to dest
 * @dest: This is destiny
 * @src: This is the copy
 * Return: start
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
