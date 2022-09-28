#include "main.h"

/**
 * factorial - factorial of given number.
 * @n: any given number:
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
