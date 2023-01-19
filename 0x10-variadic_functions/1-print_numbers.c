#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers
 * @n: number of integers passed to the function
 * @separator: the string to be printed between numbers
 * @...: a variable number of numbers to be printed
 *
 * Return: numbers and NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;

	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(para, int));

		if (i != (n - 1) && separator != NULL)
			/*if para isnt the last number & seperator isn't NULL*/
			printf("%s", separator);
	}
	printf("\n");

	va_end(para);
}

