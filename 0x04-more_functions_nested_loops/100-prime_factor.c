#include <stdio.h>

/**
 * main - print the largest prime number
 *
 * Return: 0 on success
 */

int main(void)
{
	long prime = 612852475143;
	long div; /*612852475143 is divided by div*/

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
