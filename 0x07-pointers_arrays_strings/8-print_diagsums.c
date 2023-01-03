#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array pointer
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDia1, sumDia2;

	size1 = 0;
	sumDia1 = 0;
	sumDia2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDia1 = sumDia1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDia2 = sumDia2 + a[i];
	}
	printf("%d, %d\n", sumDia1, sumDia2);
}

