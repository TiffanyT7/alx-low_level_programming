#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: pointer to a byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}
	return ('\0');
}
