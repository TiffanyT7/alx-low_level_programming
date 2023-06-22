#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
