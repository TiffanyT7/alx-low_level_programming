#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string that is checked
 * Return: length of str
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0' ; count++)
		;
	return (count);
}
