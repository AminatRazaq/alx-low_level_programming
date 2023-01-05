#include "main.h"

/**
 * is_palindrome - check for empty string
 * @s: character
 * Return: 1 on emipty string and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (0);
}
