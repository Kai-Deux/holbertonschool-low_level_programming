#include <stdio.h>
#define POSSIBLY_UNUSED(var) \
	do                   \
	{                    \
		(void)(var); \
	} while (0)

/**
 * main - program that prints its name.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	POSSIBLY_UNUSED(argv);
	printf("%d\n", argc-1);

	return (0);
}
