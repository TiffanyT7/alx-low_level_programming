#include "main.h"
#include <stdio.h>

/**
 * mysqrt - returns only natural numbers
 * @a: number to find square root of
 * @b: natural numbers
 * Return: -1 if n does not have a natural square root
 */

int mysqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
		return (mysqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (mysqrt(n, 1));
}
