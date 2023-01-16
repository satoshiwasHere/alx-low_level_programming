#include <stdio.h>
#include "main.h"

/**
 * main - print the N0. of arguments passed to the program
 * @argc: No. of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
