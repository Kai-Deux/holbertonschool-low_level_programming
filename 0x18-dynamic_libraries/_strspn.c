#include "main.h"
#include <stdio.h>
/**
 * _strspn - Entry point.
 * @accept: pointer.
 * @s: pointer.
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, z;

	for (i = 0; s[i] != '\0'; i++)
	{
		z = 2;

		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				z = 4;
				break;
			}
		}

		if (z == 2)
		{
			break;
		}
	}
	return (i);
}
