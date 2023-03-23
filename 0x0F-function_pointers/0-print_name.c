#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of person
 * @f: print name as is and in uppercase
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
