#include "main.h"

/**
 * lip_bits - check the code
 * @n: int.
 * @index: int
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
		{
			res++;
		}
	}
	return (res);
}
