#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer number
 * @n: an integer number
 *
 * Return: 0 on success
 *
 */

void print_number(int n)
{
	unsigned long num = n;

	if (n < 0)
	{
		num = -num;
	}
	print_number(num);
}
