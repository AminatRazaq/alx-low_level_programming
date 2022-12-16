#include "main.h"
#include <stdio.h>

/**
 * print_line - print 0-9 except 2 and 4
 * @n: number of times _ is done
 *
 * Return: 0 on success
 *
 */

void print_line(int n);
{
	int a = 0;/* number of iterations*/

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
