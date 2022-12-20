#include <stdio.h>
#include "main.h"

/**
 * swap_int - swapping of numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 on success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;/*temp is used for  swap in C*/

	*a = *b;
	*b = temp;
}
