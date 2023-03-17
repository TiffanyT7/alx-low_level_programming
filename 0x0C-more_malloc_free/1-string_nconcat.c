#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len2])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + a));
	}
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + a));
	}
	if (!s)
	{
		return (NULL);
	}
	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
	{
		s[a++] = s2[b++];
	}
	while (n >= len2 && a < (len1 + len2))
	{
		s[a++] = s2[b++];
	}
	s[a] = '\0';

	return (s);
}
