#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the string arguments
 * Return: pointer to new string that includes all av agruments
 */
char *argstostr(int ac, char **av)
{
	int i, j, avlen, nstrlen;
	char *newstr;

	avlen = nstrlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			avlen++;
	}
	avlen += ac + 1; /* to account for newlines and null char*/

	newstr = malloc(sizeof(char) * avlen);

	if (newstr == NULL)
		return (NULL);
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[nstrlen] = av[i][j];
			nstrlen++;
		}
		newstr[nstrlen] = '\n';
		nstrlen++;
	}
	newstr[nstrlen] = '\0';
	return (newstr);
}
