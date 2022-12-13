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
	char g = 'a';

	while (g <= 'z')
	{
		_putchar(g);
		g++;
	}
	_putchar('\n');
}
