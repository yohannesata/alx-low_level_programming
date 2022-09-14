#include "main.h"



/**
 *
 * main - print alphabetical order in lowercase
 *
 *
 *
 * Return: Always 0.
 *
 */
void print_alphabet(void)

{
	int x;

	for (x =  'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
