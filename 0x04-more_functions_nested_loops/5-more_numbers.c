#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0-9 except 2 and 4
 *
 *
 * Return: 0 on success
 *
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');/* runs for 1-9*/
			}
			_putchar((b % 10) + '0');/*runs for 0-14*/
		_putchar('\n');
		}
	}
}
