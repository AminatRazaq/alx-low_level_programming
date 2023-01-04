#include "main.h"

/**
 * _calcu - natural square root of a number
 * @n: integer
 * @m: integer
 * Return: evaluated sqrt
 */
int _calcu(int m, int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (m * m < n)
		return (_calcu(m + 1, n));
	else if (m * m == n)
		return (m);
	return (-1);
	return (-1);
}

