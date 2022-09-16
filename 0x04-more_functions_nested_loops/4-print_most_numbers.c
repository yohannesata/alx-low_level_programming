#include "main.h"

/*
 * print\-most_numbers - prints only selected numbers
 *
 * Returns 1 upto 9 numbers except 2 and 4
 */

void print_most_numbers(void);
{
	int c = 0;

	for (; c <=9; c++)
	{
		if (c==2 || c==4)
		{
			continue;
		}
		else
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
