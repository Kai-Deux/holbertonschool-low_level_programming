#include <stdio.h>
#include <stdlib.h>

/**
 * main- Program that prints the minimun number of coins to make change.
 * @argc: Integer
 * @argv: Character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/**
	 * Buscar el mímimo de monedas para cambiar la cantidad de dinero
	 * pasado por argumento
	 * si pasan 10 se necesita una sola moneda de 10 centavos = 1
	 * para 100 4 monedas de 25 centavos = 4
	 * 101 4 monedas de 25 centavos y una de un centavo = 5
	 * para 13 una moneda de 10 centavos una moneda de 2 centavos y
	 * una moneda de un centavo =3
	 */

	int change;
	int coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else
			change = change - 1;
		coins++;
	}
	printf("%i\n", coins);
	return (0);
}
