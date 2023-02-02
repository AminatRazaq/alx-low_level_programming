#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be searched
 * @index: the index, starting from 0 of the bit you want to ge
 *
 * Return: the value of bi(1 or 0), or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
