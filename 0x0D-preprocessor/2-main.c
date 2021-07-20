/*
* Write a program that prints the name of the file it was compiled from,
* followed by a new line.You are allowed to use the standard library
*/

#include <stdio.h>

/**
 * main - Prints the name of the file of the program
 *        was compiled from, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
    printf("%s\n", __FILE__);

    return (0);
}
