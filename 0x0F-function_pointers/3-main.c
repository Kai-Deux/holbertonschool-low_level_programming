#include "3-calc.h"
#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c, i;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	c = atoi(argv[1]);
	i = atoi(argv[3]);
	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", p(c, i));

	return (0);
}
