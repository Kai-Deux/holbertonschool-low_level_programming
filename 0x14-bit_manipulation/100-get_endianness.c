#include "main.h"

/**
 * flip_bits - check the code
 * @n: int.
 * @m: int
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
