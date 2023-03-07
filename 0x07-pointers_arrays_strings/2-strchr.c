#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: char or null
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (c == s[a])
		{
			return (&s[a]);
		}
	}
	return ('\0');
}
