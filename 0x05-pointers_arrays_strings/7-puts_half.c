#include "holberton.h"
/**
 * puts_half - Entry point.
 * @str: Variable which holds the string.
 *
 * Return: 0.
 */
void puts_half(char *str)
{
	int c;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = c / 2 + 1; i <= c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
