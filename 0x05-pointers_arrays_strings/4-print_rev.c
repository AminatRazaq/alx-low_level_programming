#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints the string in reverse
 *
 * @s: the string to print
 *
 * Return: returns @s on success
 */
void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
