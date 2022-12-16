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
		_putchar('_');
		num = -num;
	}
	if ((num / 10) > 0)/*numbers greater than 10*/
	{
		print_number(num / 10);/*reads all except last digit8*/
	}
	_putchar((num % 10) + '0');
}
