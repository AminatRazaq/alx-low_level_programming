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
		if (n <= 9)
		{
			putchar(n + '0');
		}
	}
	putchar('\n');
	return (0);
}
