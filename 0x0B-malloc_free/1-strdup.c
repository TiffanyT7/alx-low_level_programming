#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a strings given as a parameter
 * @str: str to be duplicated
 * Return: pointer to a duplicate string or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
		copy = malloc(sizeof(char) * (len + 1));
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	while ((copy[i] = str[i]) != '\0')
	{
		i++;
	}
	return (copy);
}
