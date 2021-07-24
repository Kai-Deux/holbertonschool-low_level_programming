#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @seperator: input
 * @n: Numbers
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;

	va_start(valist, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator != NULL && index < (n - 1))
		{
			printf("%s", seperator);
		}
	}
	va_end(valist);
	printf("\n");
}
