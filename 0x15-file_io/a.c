#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @filename: the name of the file bufferstoringchars for
 *
 * Return: A pointer to the newly allocated buffer
 */

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @f: the file descriptor to be closed
 *
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file to another file
 * @argc: the number of arguements suplied to the program
 * @argv: an array of pointers to the arguements
 *
 * Return: 0 on success.
 *
 * Decription: if the arguemnet.....
 */
int main(int argc, char *argv[])
{
	int from, to, r , w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, 
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
