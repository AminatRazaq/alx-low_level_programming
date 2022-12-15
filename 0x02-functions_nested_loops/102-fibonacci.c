#include <stdio.h>

/**
 * main - check the code
 *
 *
 * Return: absolutevalue of the number given
 *
 */

int main(void)
{
	int a;
	int b;
	int result;
	int i;

	a = 1;
	b = 2; /*first and second number*/

	for (i = 1; i <= 50; i++)
	{
		if (a == 1)
			printf("%d", a);
		else
			printf(", %d", a);
		result = a + b;
		a = b;
		b = result;
	}
	_putchar('\n');
}
