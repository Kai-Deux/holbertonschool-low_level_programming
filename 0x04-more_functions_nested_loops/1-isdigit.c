#include "holberton.h";

/**
  * _isdigit- Check if c is a digit
  * @c: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */

int  _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
