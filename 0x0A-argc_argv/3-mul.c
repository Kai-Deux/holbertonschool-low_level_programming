#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 or 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		/**
		 * atoi: Convierte una cadena a su valor numérico(entero)
		 * Biblioteca : stdlib.h
		 * Declaración : int atoi(const char *cadena);
		 * Parámetros: La cadena a convertir
		 * Valor devuelto : El valor numérico
		 */

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}

	return (0);
}
