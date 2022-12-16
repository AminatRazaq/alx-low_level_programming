#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	int n = 1, stop = 100;

	while  (n <= 100)
	{
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
		putchar(n == stop ? '\n' : ' ');
		n++;
	}
	return (0);
}
