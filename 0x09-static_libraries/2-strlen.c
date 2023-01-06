#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds the length of the string
 *
 * @s: the string to find the lenghth
 *
 * Return: returns he length of the string @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
