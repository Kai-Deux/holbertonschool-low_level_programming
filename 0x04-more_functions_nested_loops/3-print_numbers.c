#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * void: No Input Parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{

		_putchar(number);

	}
	_putchar('\n');
}
