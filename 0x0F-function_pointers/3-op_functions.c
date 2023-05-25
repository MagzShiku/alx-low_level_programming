#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - function to add
 * @a: integer 1
 * @b: integer 2
 * Return: Value of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: integer 1
 * @b: integer 2
 * Return: Value of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: integer 1
 * @b: integer 2
 * Return: Value of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide
 * @a: integer 1
 * @b: integer 2
 * Return: Value of operation
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to get modulo
 * @a: integer 1
 * @b: integer 2
 * Return: Value of operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
