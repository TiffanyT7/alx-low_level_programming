#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a])
		a++;

	str = malloc(sizeof(*str) * a + n + 1);

	if (str == NULL)
		return (NULL);

	for (b = 0, c = 0; b < (a + n); b++)
	{
		if (b < a)
		{
			str[b] = s1[b];
		}
		else
		{
			str[b] = s2[c++];
		}
	}
	str[b] = '\0';
	return (str);
}
