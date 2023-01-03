#include "main.h"
#include <stdio.h>

/*
 * _strpbrk - prints consecutive characters of s1 that are in s2.
 * @s: Source string
 * @accept: searching string
 * Return: new string if a set is matched
 * NULL - if no such byte is found
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
