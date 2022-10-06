#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Functions to allocates memory for an array.
 * @nmemb: the Number of the array elements.
 * @size:  size of elements on the Array. *
 * Return: void pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;
	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

return (arr);
}
