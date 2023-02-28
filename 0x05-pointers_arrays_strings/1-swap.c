#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: character to be swapped
 * @b: character to be swapped
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
