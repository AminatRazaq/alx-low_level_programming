#include "main.h"

/**
 * flip_bits - function flip to get from one number to another
 * @n: points to the bits
 * @m: number to be flipped to from@n
 *
 * Return: the flipped number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_num;
	unsigned long int bits;

	/*recall sign for XOR is ^ */
	flip_num = n ^ m;
	bits = 0;

	while (flip_num > 0)
	{
		bits += (flip_num & 1);
		flip_num >>= 1;/*flip_num = flip_num>>1 */
	}
	return (bits);
}

