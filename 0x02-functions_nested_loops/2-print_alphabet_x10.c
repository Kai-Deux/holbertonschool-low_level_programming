#include "holberton.h"

/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
int count = 0;
while (count <= 10)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
count++;
_putchar('\n');
}
}
