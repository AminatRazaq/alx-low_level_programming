#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *reloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	reloc = malloc(new_size);
	if (reloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(reloc + i) = clone[i];
	}
	free(ptr);
	return (reloc);
}

