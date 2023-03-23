#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - runs function given as a parameter on each element of array
 * @array: array elements
 * @size: size of array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
