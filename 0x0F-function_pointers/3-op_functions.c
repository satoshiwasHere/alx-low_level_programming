#include "3-calc.h"

/**
 * op_add - Evaluates the sum of two int
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Evaluates the difference of two int
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - evaluates the product of two ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Evaluates the division of two ints
 * @a: 1st int 
 * @b: 2nd int 
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Evaluates the remainder of the division of 2 int 
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
