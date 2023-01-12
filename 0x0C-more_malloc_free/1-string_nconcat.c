#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte concatenated from s2 into s1
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)/*if NULL is passed, treat it as an empty string*/
		s1 = "";
	if (s2 == NULL)/*if NULL is passed, treat it as an empty string*/
		s2 = "";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)/*If n is greater or equal to the length of s2*/
		n = size2;/*..then use the entire string s2*/
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);/*terminated if NULL*/
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];/*for first string*/
	}
	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
