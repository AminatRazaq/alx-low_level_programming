#include <stdio.h>
#include "main.h"

/**
 * print_sign - check the code
 *
 * @n: character to be checked
 *
 * Return: 1 if @n is greater than 1, 0 if equals 0, else -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
