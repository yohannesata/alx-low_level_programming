#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - unction that allocates memory using malloc.
 *@b: unsigned int
 *Return: VOID Pointer
 */
void *malloc_checked(unsigned int b)
{

	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	exit(98);
	return (pointer);
}
