#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	conc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conc == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
		conc[i] = s1[i];
		i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			conc[i] = s2[j];
			i++;
			j++;
		}
	}
	conc[i] = '\0';
	return (conc);
}
