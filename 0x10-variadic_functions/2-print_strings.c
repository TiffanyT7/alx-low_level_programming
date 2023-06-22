#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
