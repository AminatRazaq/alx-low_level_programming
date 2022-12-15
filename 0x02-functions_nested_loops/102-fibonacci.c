#include <stdio.h>

/**
 * main - check the code
 *
 *@i: number of iterations
 * Return: absolutevalue of the number given
 *
 */

int main()
{
	int a;
	int i;
	int b;
	int result;

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
	putchar('\n');
}
