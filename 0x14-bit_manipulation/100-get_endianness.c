#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *end_ness = (char *)&num;

	if (*end_ness == 1)/*i.e. big endian*/
		return (1);

	return (0);
}
