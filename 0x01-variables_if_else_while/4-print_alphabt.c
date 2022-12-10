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
	int ch = 'a';

	while (ch <= 'z')
	{
		if (!(ch == 'e') || !(ch == 'e'))
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
