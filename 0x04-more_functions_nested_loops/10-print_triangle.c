#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangles
 * @size: number of times _ is done
 *
 * Return: 0 on success
 *
 */

void print_triangle(int size)
{
	int sta = 0, end = size, cnt;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (cnt = 0; cnt < end; cnt++)
		{
			while (sta < end)
			{
				if ((sta + cnt + 1) >= end)
					_putchar('#');
				else
					_putchar(' ');
				sta++;
			}
			sta = 0;
			_putchar('\n');
		}
	}
}
