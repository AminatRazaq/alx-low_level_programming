#include "main.h"
/**
 * _strlen_recursion -size
 * @s: pointer to string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * pl - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */
int pl(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (pl(s + 1, l - 2));
	return (0);
}
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
