#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - function that print a string overwriting a string
 * @src: int
 * @dest: int
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
