#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: upon success 0
 */
int main(int argc, char *argv[])
{
	int a;/*first number*/
	int b;/*second number*/

	if (argc == 3)/*3 arg.i.e filename, first num, second num*/
	{
		a = atoi(argv[1]);/*atoi =change string to integer*/
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
