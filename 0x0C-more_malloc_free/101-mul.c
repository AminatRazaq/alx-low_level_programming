#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - mutilplies two positive numbers
 * @argc: n arguments (argc also num1 here)
 * @argv: args (argv also num2 here
 * Return: integer
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)/*if number of arguement is incorrevt*/
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
