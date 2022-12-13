#include <unistd.h>

/**
 * main - main function
 *
 * Return: Always 0 (success)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
