#include "holberton.h"
/**
 *swap_int - Entry point
 *
 *@a: give me a value
 *@b: give me another value
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
