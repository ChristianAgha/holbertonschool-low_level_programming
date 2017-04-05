#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of characters to read and  print
 * Return: the actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text_file;
	char *buffer;
	ssize_t reed, rite;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	text_file = open(filename, O_RDONLY);
	if (text_file == -1)
	{
		free(buffer);
		return (0);
	}
	reed = read(text_file, buffer, letters);
	if (reed == -1)
	{
		free(buffer);
		return (0);
	}
	rite = write(STDOUT_FILENO, buffer, reed);
	if (rite == -1)
	{
		free(buffer);
		return (0);
	}
	text_file  = close(text_file);
	if (text_file == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (reed);
}
