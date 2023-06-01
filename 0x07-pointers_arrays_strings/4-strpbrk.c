#include "main.h"
#include <stdio.h>

/*
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Source string
 * @accept: searching string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
