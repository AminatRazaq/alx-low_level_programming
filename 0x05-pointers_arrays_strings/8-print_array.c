#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: printed array
 * @n: number of element in an aray
 *
 * Return: 0 on success
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < 0)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	_putchar('\n');
}
