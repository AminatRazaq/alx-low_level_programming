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
	int p;
	int n;

	a = 1;
	b = 2; /*first and second number*/

	for (i = 1; i <= 33; i++)/*i fixed 33 personally*/
	{
		result = a + b;
		a = b;
		b = result;
		if (result <= 4000000)
		{
			n = result % 2;
			if (n == 0)
				p = p + result;
		}
	}
	printf("%d\n", p);
	return (0);
}
