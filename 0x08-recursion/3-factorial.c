#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: int
 * Return: -1 if its error;
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	return (-1);
}
