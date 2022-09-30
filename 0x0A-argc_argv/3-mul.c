#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name.
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: 0.
 */
int main(int argc, char* argv[])
{
	int i = 0;
	if(argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

