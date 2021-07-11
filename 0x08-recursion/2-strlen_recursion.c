#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: char
 * Return: count;
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		count++;
	}

	return (count);
}
