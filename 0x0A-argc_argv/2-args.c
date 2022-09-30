#include <stdio.h>
/**
 * main - prints ncommands
 * @argc: number of commands
 * @argv: values of commands
 * return 0
 **/
int main(int argc, char* argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
