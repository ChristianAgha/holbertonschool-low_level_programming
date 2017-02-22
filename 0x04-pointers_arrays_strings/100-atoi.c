#include "holberton.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: int result
 *
 */
int _atoi(char *s)
{
	int i = 0;
	int minus = -1;
	int res = 0;
	int isnum = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 - (s[i] - '0');
			isnum = 1;
		}
		else if (isnum == 1)
			break;
		i++;

	}
	return (res * minus);
}
