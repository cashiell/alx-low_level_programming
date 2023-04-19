#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculate sum
 * @a: first input
 * @b: second input
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculate diff
 * @a: first input
 * @b: second input
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -  calculate multiple
 * @a: input
 * @b: input
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
 * op_mod - calculate the remainder
 * @a: input
 * @b: input
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
