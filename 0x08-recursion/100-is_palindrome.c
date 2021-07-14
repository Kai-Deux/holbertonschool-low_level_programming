#include "holberton.h"

/**
 *_strlen - Entry point
 *@s: give me the word
 *Return: gave large
 */
int _strlen(char *s)
{
	int large = 0;

	while (*(s + large) != '\0')
	{
		large++;
	}
	return (large);
}

/**
 * palin - Compare a string (First letter and the last)
 * @s: String
 * @len: Size of the string
 * @i: Position of the string
 * Return: Returns 1 if a string is a palindrome and 0 if not
 **/

int palin(char *s, int len, int i)
{
	if (i < len)
	{
		if (*(s + i) == *(s + len))
		{
			return (palin(s, len - 1, i + 1));
		}
		else if (*(s + i) != *(s + len))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

	return (1);
}

/**
 * is_palindrome - Sequence of characters which reads the same
 * backward as forward
 * @s: String
 * Return: Returns 1 if a string is a palindrome and 0 if not
 **/
int is_palindrome(char *s)
{
	int size = _strlen(s) - 1;

	return (palin(s, size, 0));
}
