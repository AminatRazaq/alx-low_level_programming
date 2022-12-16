#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0-9 except 2 and 4
 *
 *
 * Return: 0 on success
 *
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 48; b <= 62; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
