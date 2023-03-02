#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes characters from lowercase to uppercase
 * @n: pointer
 * Return: characters in uppercase
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - 32;
		}
	a++;
	}
	return (n);
}
