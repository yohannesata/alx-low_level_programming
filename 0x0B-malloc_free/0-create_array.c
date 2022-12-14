#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates a dynamic memory allocation
 * @size : the size of an array.
 * @c: character.
 * Return: pointer to the Array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	return (NULL);

	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		pointer[i] = c;

	return (pointer);
}
