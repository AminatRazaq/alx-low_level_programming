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
	int ch = 'a';

	for (n = 0; n <= 9; n++)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
