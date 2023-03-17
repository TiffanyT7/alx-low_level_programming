#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of elements in bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b, c;

	c = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	a = malloc(c);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < c; b++)
	{
		a[b] = 0;
	}
	return (a);
}
