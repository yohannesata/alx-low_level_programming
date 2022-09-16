#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: number of times to print the line
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

	_putchar('\n');
	}
}
