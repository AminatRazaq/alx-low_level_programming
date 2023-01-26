#include <stdio.h>

void __attribute__((constructor)) hare_tortoise(void);
/*__attribute__((constructor)):execute a function when the program starts*/
/**
 * hare_tortoise - prints a string before the main function is excuted
 */
void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
