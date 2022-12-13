#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int g;
	int d;

	for (g = 1; g <= 10; g++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
