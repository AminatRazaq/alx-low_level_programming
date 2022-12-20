#include <stdio.h>
#include "main.h"

/**
 * _puts - prints  the string
 *
 * @str: the string to print
 *
 * Return: returns @str on success
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
