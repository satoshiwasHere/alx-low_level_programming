#include "main.h"
/**
 * put2 - function printing every other character of a string
 * starting wuth the first character, followed by  new line
 *@ str: pointer to string.
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
