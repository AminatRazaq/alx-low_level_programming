#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: character
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}
