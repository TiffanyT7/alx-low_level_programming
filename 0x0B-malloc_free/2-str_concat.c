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

	int i, h;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = h = 0;
	
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[h] != '\0')
	{
		h++;
		conc = malloc(sizeof(char) * (i + h + 1));
	}
	if (conc == NULL)
	{
		return (NULL);
	}
	i = h = 0;

	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[h] != '\0')
	{
		conc[i] = s2[h];
		i++, h++;
	}
	conc[i] = '\0';
	return (conc);
}
