#include "main.h"
#include <stdio.h>

/**
 * print_square - check code
 * @size: number of times # is done
 *
 * Return: 0 on success
 *
 */

void print_square(int size)
{
	int cnt1;
	int cnt2;
	int endcnt1;
	int endcnt2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cnt1 = 0; cnt1 <= size; cnt1++)
		{
			for (cnt2 = 0; cnt2 <= size; cnt2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
