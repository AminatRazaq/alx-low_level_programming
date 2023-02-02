#include "main.h"

/**
 * set_bit - sets bits to value of 1
 * @n: points to the number to be serached
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}

