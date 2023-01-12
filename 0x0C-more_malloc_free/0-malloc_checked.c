#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memeory using malloc
 * @b: size or number of bytes allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;/*void * a pointer to the type of your choice*/

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

