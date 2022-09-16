#include "main.h"

/**
* print_numbers - prints numbers from 0 upto 9
* 
* \return: numbers from0 upto 9
*/
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
