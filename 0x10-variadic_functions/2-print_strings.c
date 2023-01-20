#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by a new line.
 * @separator: An input string to be inserted between digits.
 * @n: no of parameters
 * @..: Aternative parameters
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
