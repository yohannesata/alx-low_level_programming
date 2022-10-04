#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: a pointer to the allocated memory area
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		p[j++] = s2[i];

	return (p);
}
