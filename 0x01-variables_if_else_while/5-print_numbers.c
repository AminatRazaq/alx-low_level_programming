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
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}