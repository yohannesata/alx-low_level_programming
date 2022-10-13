#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);

/**
 * op_add - adds sum of two numbers
 * @a: first number to be added
 * @b: second number to be added
 */

int op_add(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides two numbers
 * @a: first number
 * @b: second number
 */

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
