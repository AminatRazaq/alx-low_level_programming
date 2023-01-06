#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arguement count
 * @argv: arguement vector
 * Return: upon success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
