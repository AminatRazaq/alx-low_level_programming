#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is null or other than 1 and 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;/*for counting through each digit in a binary number*/
	unsigned int decimal;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		decimal = (decimal * 2) + (b[i]);
	}
	return (decimal);
}
