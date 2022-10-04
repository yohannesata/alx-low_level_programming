#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to copy a string on a new allocated memory
 * area .
 * @str: string to copy
 *
 * Return: a pointer to the copied string .
 */

char *_strdup(char *str)
{
char *pointer;
int i;
int count = 0;

if (str == NULL)
	return (NULL);

while (*(str + count))

	count++;
pointer = malloc(sizeof(char) * (count + 1));


if (pointer == NULL)
	return (NULL);
i = 0;
while (i <= count)
{
	*(pointer + i) = *(str + i);
		i++;
}
return (pointer);
}
