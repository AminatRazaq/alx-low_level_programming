#include <stdio.h>
#include "main.h"

/**
 * times_table- check the code
 *
 *
 * Return: nothing on success
 *
 */

void times_table(void)
{
	int s = 0, e = 9, i = 0;

	while (i  <= 9)
	{
		while (s <= e)
		{
			int prodt = i * s;

			if (s != 0)
			{
				_putchar(',');
				if (prodt < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else 
					_putchar(' ');
			}
			if (prodt < 10)
				_putchar(prodt + '0');
			}
			else
			{
				_putchar(prodt / 10 + '0');
				_putchar(prodt % 10 + '0');
			}
			if (s == e)
				_putchar('\n');
			s++;
	}
	s = 0;
	i++;
}
