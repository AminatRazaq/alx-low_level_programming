#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 *
 * @n: first integer
 *
 * Return: all numbers
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(' ');
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				print(' ');
			n++
	}
	putchar('\n');
}
