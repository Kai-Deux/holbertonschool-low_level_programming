#include "holberton.h"
/**
 * _strcat - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *@n: int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, c;

	for (i = 0; dest[i] != '\0'; i++);
		for (c = 0; src[c] != '\0'; c++);
			if (n > c)
			{
				n = c;
			}
			for (j = 0; j < n;)
			{
				dest[i + j] = src[j];
				j++;
			}
	return (dest);
}
