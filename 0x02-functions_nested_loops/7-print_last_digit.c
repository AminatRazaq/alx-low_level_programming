#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @digs: number to be checked
 *
 * Return: last digit of @digs
 *
 */

int print_last_digit(int digs)
{
	int last_digs = digs % 10;

	last_digs = last_digs < 0 ? -1 * last_digs : last_digs;
	_putchar(last_digs + '0');

	return (last_digs < 0 ? -1 * last_digs : last_digs);
}
