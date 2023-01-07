#include <stdio.h>
#include <stdlib.h>
/**
 * isNumeric - checks if a string is a number or not
 * @str: checked string
 * Return: if number,0 else 1
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')/* all digits are 0-9*/
			return (0);
		str++;
	}
	return (1);/* if not digit*/
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: upon success 0
 */
int main(int argc, char *argv[])
{
	int i = 1;/*initialize from 1 not to miss the argv[0]*/
	int sum = 0;

	while (i < argc)
	{
		if (isNumeric(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
