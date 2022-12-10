#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: Always 0 (Succes)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
