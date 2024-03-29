#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)/*i.e. malloc fails*/
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;/*memory is set to zero*/

	return (ptr);
}
