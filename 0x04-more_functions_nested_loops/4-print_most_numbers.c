#include "holberton.h"

/**
  * print_most_numbers -  prints the numbers, from 0 to 9
  * Do not print 2 and 4
  * Return: 0
  */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
		{

			_putchar(number);

		}
	}
	_putchar('\n');
}
