#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase.
 *@c: character being tested
 * Return: 1 if true else 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
