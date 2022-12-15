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

	a = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			b = i;
		else if (i % 5 == 0)
			b = i;
		a = a + b;
	}
	putchar('\n');
	return (0);
}
