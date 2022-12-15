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
	int m;
	int n;

	a = 0;

	for (i = 1; i < 1024; i++)
	{
		n = i % 3;
		m = i % 5;
		if (n == 0 || m == 0)
			a = a + i;
	}
	printf("%d\n", a);
	return (0);
}
