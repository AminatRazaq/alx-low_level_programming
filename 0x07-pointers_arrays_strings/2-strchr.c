#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the source string
 * @c: character in the string
 * Return: a pointer to the first occurrence of the Xter @c in the string @s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
