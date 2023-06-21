#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - calculates addition
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates subtraction
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates multiplication
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates modulo
 * @a: integer 1
 * @b: integer 2
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
