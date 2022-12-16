#include "main.h"
#include <stdio.h>

/**
 * main - print triangles
 *
 * Return: 0 on success
 *
 */

int main(int)
{
	int i, j, num, isPrime;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 1;

			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
			{
				printf("%d, ", i);
			}
		}
	}
	return (0);
}
