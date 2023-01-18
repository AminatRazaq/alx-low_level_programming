#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @size: number of elements in the array @array
 * @cmp: function pointer to be used to compare values
 * @array: array
 * Return: no element matches, return -1, cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!array || !cmp)
		return (-1);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
		/*returns the index of the first element if cmp funct. !=0*/
	}
	return (-1);
}
