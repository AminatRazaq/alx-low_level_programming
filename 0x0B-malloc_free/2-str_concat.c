#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - back to a pointer to array
 * @s1: Array 1
 * @s2: Array 2
 * Return: Always an array dynamic
 */
char *str_concat(char *s1, char *s2)
{
	char *dt;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	dt = (char *) malloc(size * sizeof(char));

	if (dt == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dt + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dt + i) = *(s2 + j);
		i++;
	}
	return (dt);
}
