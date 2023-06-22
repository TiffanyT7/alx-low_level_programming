#include <stdio.>
#include "variadic_fucntions.c"
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int i, j;
	char *str;
	char separator = ",";

	va_start(arglist, format);

