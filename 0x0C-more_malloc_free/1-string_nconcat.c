#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of memory to allocate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, h;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	len = 0;
	while (s1[len])
		len++;

	str = malloc(sizeof(*str) * len + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0, h = 0; i < (len + n); i++)
	{
		if (i < len)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[h++];
		}
	}
	str[i] = '\0';
	return (str);
}
