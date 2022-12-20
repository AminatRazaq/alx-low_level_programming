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
	int i = 0;

	while (*s)
	{
		s++;/*to know the number of character*/
		i++;
	}
	while (i)
	{
		s--;
		_putchar(*s);/*to reverse characters*/
		i--;
	}
	_putchar('\n');
}
