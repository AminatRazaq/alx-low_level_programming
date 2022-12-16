#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0-9 except 2 and 4
 *
 *
 * Return: 0 on success
 *
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
