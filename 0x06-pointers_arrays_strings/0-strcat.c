#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenate two strings
 *
 * @dest: a pointer to the string to be concatenated
 * @src: the source string appended to @dest
 *
 * Return: a pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] - src[index];
	return (dest);
}
