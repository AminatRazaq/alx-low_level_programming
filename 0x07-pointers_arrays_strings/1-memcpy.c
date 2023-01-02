#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: where bytes are copied from
 * @dest: where bytes are copied to
 * @n: the number of bytes copied from @src to @dest
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
