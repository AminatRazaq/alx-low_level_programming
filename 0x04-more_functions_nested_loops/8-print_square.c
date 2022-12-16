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
	int cnt = 0, start;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (start = 0; start < size; start++)
		{
			while (cnt < size)
			{
				_putchar('#');
				cnt++;
			}
			cnt = 0;
			_putchar('\n');
		}
	}
}
