#include "main.h"

/**
 * _isdigit prints only numbers
 * @c: checks the number
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
