#include "main.h"

/**
 * main - check the code
 *@c: _isdigit prints only numbers
 * Return: Always 0.
:*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
