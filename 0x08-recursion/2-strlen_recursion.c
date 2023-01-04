#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: character
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 0;
		i++;
		i = _strlen_recursion(s + 1);
	}
	return (i);
}
