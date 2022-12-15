#include <stdio.h>
#include "main.h"

/**
 * print_times_table - check the code
 *
 * @n: number to be checked
 *
 * Return: If n is (not) greater than 15 or (not) less than 0
 *
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0) /*for , 1, 2, etc*/
				_putchar('0' + c);
			else
			{
				_putchar(',');/*, b4 space*/
				_putchar(' ');/*space b4 digit*/
				if (c < 9)/*for first digit*/
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c);
				}
				else if (c > 9 && c < 99)
				{
					_putchar(' ');
					_putchar('0' + (c / 10));
					_putchar('0' + (c % 10));
				}
				else if (c >= 100)/*third dig.*/
				{
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10)));
					_putchar('0' + (c % 10));
				}
			}
		}
		_putchar('\n');
	}
}
