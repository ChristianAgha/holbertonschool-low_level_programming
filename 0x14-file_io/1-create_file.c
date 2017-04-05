#include "holberton.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int file, length, rite;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(file) == -1)
			return (-1);
		return (1);
	}
	for (length = 0; text_content[length] != '\0'; length++)
		;
	rite = write(file, text_content, length);
	if (rite == -1)
	{
		close(file);
		return (-1);
	}
	close(file);

	return (1);
}
