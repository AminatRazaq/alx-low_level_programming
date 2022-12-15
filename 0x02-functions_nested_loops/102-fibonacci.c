#include <stdio.h>

/**
 * main - check the code
 *
 * Return: absolutevalue of the number given
 *
 */

int main(void)
{
	int a;
	int i;
	int b;
	int result;

	a = 1;
	b = 2; /*first and second number*/

	for (i = 0; i <= 50; i++)
	{
		if (a == 1)
			printf("%d", a);
		else
			printf(", %d", a);
		result = a + b;
		a = b;
		b = result;
	}
	putchar('\n');
	return (0);
}
