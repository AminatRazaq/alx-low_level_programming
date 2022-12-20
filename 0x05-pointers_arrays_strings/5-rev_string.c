#include <stdio.h>
#include "main.h"

/**
 * rev-string - prints the string in reverse
 *
 * @s: the string to reverse
 *
 * Return: returns @s on success
 */
void rev_string(char *s)
{
	int i = 0; j = 0;/* both are conunters*/
	char last_char;

	while (*s)
	{
		s++;/*to know the number of character*/
		i++;
	}
	for (j = 0; j < i; j++)
		s--;
	for (i = 0; j < (i / 2); j++)
	{
		int last = i - 1;/* last is a fixed word in C*/

		last_char = s[last - j];
		s[last - j] = s[j];
		s[j] = last_char;
}
