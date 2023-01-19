#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguements passed to the function
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list para;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(para, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(para, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(para, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(para, double)), c = 1;
				break;
			case 's':
				str = va_arg(para, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(para);
}

