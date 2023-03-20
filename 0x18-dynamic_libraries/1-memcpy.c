#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: destination
 * @n: max bytes to use
 * @src: source
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
