#include "holberton.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, rite, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	for (length = 0; text_content[length] != '\0'; length++)
		;
	rite = write(file, text_content, length);
	if (rite == -1)
		return (-1);
	close(file);

	return (1);
}
