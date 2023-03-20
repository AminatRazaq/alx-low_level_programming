#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the source string
 * @accept: searching string
 * Return: a pointer to the byte @s or NULL, if  no byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
			if (*(s + j) == *(accept + i))
			{
				break;
			}
		if (*(accept + i) != '\0')/*i.e. not null*/
		{
			return (s + j);/*current character*/
		}
	}
	return (0);/*if no byte is found*/
}
