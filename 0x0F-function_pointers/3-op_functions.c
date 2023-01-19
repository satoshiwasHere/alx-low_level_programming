#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that evaluates the sum of a and b.
 * @a: input integer
 * @b: input integer
 * Return: The result to sum a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that evaluates the difference of a and b.
 * @a: input integer
 * @b: input integer
 * Return: The result to a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that evaluates multuplication
 * of a and b.
 * @a: input integer
 * @b: input integer
 * Return: The result to a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that evalutes division of a and b.
 * @a: input integer
 * @b: input integer
 * Return: The result to a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a function that evaluates the module of a and b.
 * @a: input integer
 * @b: input integer
 * Return: The result to module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
