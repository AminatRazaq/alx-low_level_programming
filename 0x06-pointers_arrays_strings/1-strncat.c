#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenate two strings
 *
 * @dest: a pointer to the string to be concatenated
 * @src: the source string appended to @dest
 * @n: the number of bytes from src to be appended
 *
 * Return: a pointer to the destination string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
