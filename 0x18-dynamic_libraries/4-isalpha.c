#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - check the code
 *
 * @c: character to be checked
 *
 * Return: 1 if @c is lowercase else 0
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
