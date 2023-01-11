#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arry of char
 * @size: number of elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	/*values deined with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
	}
		while (i < size)/*for array*/
		{
			*(buffer + i) = c;
			i++;
		}
		return (buffer);
}
