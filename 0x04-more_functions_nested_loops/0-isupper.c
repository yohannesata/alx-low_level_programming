#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase.
 *@c: character being tested
 * Return: 1 if true else 0.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
		return (0);
}
