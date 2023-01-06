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
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
