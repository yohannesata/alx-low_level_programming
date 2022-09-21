#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function reversing.
 * @a: pointer
 * @n: pointer
 * Return: No return
 */
void reverse_array(int *c, int n)
{
	int a, b, d;

	if (n % 2 != 0)
		d = n + 1;
	else
		d = n;
	for (a = 0; a < d / 2; a++)
	{
		b = c[a];
			c[a] = c[n - 1 - a];
				c[n - 1 - a] = b;
	}
}
