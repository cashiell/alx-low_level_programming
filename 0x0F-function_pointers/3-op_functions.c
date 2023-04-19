#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculate addition
 * @a: intput
 * @b: intput
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate substraction
 * @a: input
 * @b: input
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate multiplication
 * @a: input
 * @b: input
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate division
 * @a: input
 * @b: input
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate remainder
 * @a: input
 * @b: input
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
