#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @n: number of strings passed to the function
 * @separator: the string to be printed between the strings
 * @...: A variable number of numbers to be printed
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;
	char *str;

	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(para, char *);

		if (str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator == NULL)
			/*para(i) isnt last string and sep. isnt NULL*/
			printf("%s", separator);
	}
	printf("\n");

	va_end(para);
}
