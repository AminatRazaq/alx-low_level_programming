#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- print 0-9 except 2 and 4
 * @n: number of times _ is done
 *
 * Return: 0 on success
 *
 */

void print_diagonal(int n)
{
	int count = 0, start = 0, end;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			end = count;
			while (start <= end)
			{
				if (start == end)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			count++;
		}
	}
}
