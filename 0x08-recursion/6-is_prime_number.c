#include "main.h"
#include <stdio.h>

/**
 * myprime - evaluate n
 * @a: number to check if prime
 * @b: number used to evaluate
 * Return: 1 if n is prime, 0 otherwise
 */

int myprime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (myprime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (myprime(n, 2));
}
