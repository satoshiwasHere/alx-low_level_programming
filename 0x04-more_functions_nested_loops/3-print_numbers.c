#include "main.h"
/**
 * Print_numbers - print numbers
 * return: Always 0.
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)

	{
	_putchar (i + '0');
	i++;
	}

	_putchar ('\n');
}
