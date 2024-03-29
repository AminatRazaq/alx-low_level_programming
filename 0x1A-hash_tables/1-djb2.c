#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashhh;
	int c;

	hashhh = 5381;
	while ((c = *str++))
		hashhh = ((hashhh << 5) + hashhh) + c; /* hashhh * 33 + c */

	return (hashhh);
}
