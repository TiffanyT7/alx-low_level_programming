#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: size of array
 * @size: number of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, h;

	h = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(h);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (h); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
