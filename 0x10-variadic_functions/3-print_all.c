#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: List arguments
 */

void print_all(const char *const format, ...)
{
	va_list g;
	unsigned int print, i = 0;
	char *string;

	while (format)
	{
		va_start(g, format);
		while (format[i])
		{
			print = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(g, int));
				break;
			case 'i':
				printf("%d", va_arg(g, int));
				break;
			case 'f':
				printf("%f", va_arg(g, double));
				break;
			case 's':
				string = va_arg(g, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				print = 0;
				break;
			}
			if (format[i + 1] && print)
				printf(", ");
			i++;
		}

		va_end(g);
		break;
	}
	printf("\n");
}
