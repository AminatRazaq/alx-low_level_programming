#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @letters: number of letters it should read and print
 * @filename: the declared file pointer.
 *
 * Return: no of letters it cud read\&print,if filename=NULL & file cant read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;/*open,read,write*/
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);/*allocating size of char to buffer*/
	if (buffer == NULL)/*recall: letters are numbers here, above line*/
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	/*recall from quiz, the return value if system call"open" fails, it is -1*/
	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);/*to return the number of letters*/
}
