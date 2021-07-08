#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - Entry point
 * @size: int
 * @a: int
 *
 * Return: 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, z, w;

	z = 0;
	w = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		z += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		w += a[j];
	}
	printf("%d, %d\n", z, w);
}
