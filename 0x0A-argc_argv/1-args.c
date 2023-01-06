#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: arguement count
 * @argv: arguement vector
 * Return: upon success 0
 */
int main(int argc, char *argv[])
{
	(void) argv;/*ignore argv,because it wasn't used here*/
	printf("%i\n", argc - 1);
	return (0);
}
