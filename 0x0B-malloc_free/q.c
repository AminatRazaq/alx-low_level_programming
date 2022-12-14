#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end of the 1st word in a string
 * @str: string to be searched
 * return: index marking end of intial word pointed by str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count-words - count no of words in a string
 * @str: strring searched
 * Return: no of words in @str
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;
	
	for (index = 0; *(str +index); index++)
		len++;
	for (index = 0; index < len;  index++)
	{
		if (*(str + indez) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: if str = NULL, return ' ', else a pointer to array
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
