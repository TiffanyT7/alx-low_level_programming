#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: amount of memory allocated
 * @c: char
 * Return: NULL or array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
