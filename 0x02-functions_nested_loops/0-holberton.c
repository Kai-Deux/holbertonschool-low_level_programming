#include "holberton.h"

/*
*main - Entry point
*Return: 0
*/

int main(void)
{
char holberton[] = "Holberton";
int msg;
for (msg = 0; msg <= 10; msg++)
{
_putchar(holberton[msg]);
}
_putchar('\n');
return (0);
}
