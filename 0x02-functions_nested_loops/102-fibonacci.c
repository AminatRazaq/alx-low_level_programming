#include <stdio.h>

/**
 * main - check the code
 *
 * Return: absolutevalue of the number given
 *
 */

int main(void)
{
	long a;
	int i;
	long b;
	long result;

	a = 1;
	b = 2; /*first and second number*/

	for (i = 1; i <= 50; i++)
	{
		if (a == 1)
			printf("%ld", a);
		else
			printf(", %ld", a);
		result = a + b;
		a = b;
		b = result;
	}
	putchar('\n');
	return (0);
}
