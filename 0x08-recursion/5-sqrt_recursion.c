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

/**
 * _sqrt_recursion - sqrt
 * @n: integer
 * Return: sqrt recursion
 */
int _sqrt_recursion(int n)
{
	int m = 0;

	if (m < 0)/*i.e.m is negtive*/
		return (-1);
	else
		return (_calcu(m, n));
}
