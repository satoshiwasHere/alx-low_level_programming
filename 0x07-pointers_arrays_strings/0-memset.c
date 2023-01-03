#include "main.h"
/**
 * _memset - fills first n bytes of the memory pointed bt s
 * with  the constant byte b.
 * @s : source string.
 * @b : constant byte to be filled.
 * @n : number of bytes to be filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
