#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: arguement count
 * @argv: arguement vector
 * Return: upon success 0
 */
int main(int argc, char *argv[])
{
	(void) argc;/*because it wasn't used here*/ 
	printf("%s\n", argv[0]);
	
	return (0);
}
