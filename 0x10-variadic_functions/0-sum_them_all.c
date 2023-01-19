#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of arguements
 *
 * Return: 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int i;/*last required argument is "n"*/
	int sum;

	if (n == 0)
		return (0);
	va_start(para, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(para, int);
	va_end(para);
	return (sum);
}
