#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments passed to program
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to, reed, rite, length;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1204);
	if (buffer == NULL)
		return (0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	reed = read(file_from, buffer, 1024);
	if (reed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	for (length = 0; buffer[length] != '\0'; length++)
		;
	rite = write(file_to, buffer, length);
	if (rite == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(file_from);
	close(file_to);
	return (0);
}
