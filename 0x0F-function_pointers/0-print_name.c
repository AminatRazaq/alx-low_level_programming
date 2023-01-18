#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to be printed
 * @f: function pointer to @name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);/*in function pointer, you may leave out * and &for address*/
}
