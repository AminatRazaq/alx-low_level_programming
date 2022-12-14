#include <stdio.h>
#include "main.h"

/**
 * jack_bauer- check the code
 *
 * Return: nothing
 *
 */

void jack_bauer(void)
{
	int h = 0, hf = 23, m = 0, mf = 59;

	while (h <= hf)
	{
		while (m <= mf)
		{
			_putchar(h < 9 ? 0 + '0' : h / 10 + '0');
			_putchar(h < 9 ? h + '0' : h % 10 + '0');
			_putchar(':');
			_putchar(m < 9 ? 0 + '0' : m / 10 + '0');
			_putchar(m < 9 ? m + '0' : m % 10 + '0');
			_putchar('\n');

			m++;
		}
		m = 0;
		h++;
	}
}
