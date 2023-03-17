#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int b, range;

	range = (max - min) + 1;
	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * range);
	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
	{
		a[b] = min++;
	}
	return (a);
}
