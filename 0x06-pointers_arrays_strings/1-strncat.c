#include "main.h"

/**
 * _strncat - function
 *@dest: char
 *@src: char
 *@n: int
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0' && b < n)
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';

	return (dest);
}
