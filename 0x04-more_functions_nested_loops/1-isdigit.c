#include "holberton.h";

/**
  * _isdigit - Check if c is a digit
  * @c: parameter in ASCII
  *
  * Return: 1 if c is a digit or 0 otherwise
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
