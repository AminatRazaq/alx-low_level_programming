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
	int Fizz;
	int Buzz;
	int FizzBuzz;
	int n;

	for  (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
		putchar(n == 100 ? '\n' : ' ');
		n++;
	}
	return (0);
}
