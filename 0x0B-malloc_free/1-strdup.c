#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: string to be copied
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';

	return (cpy);
}
