#include"main.h"
/**
 * _strncpy - string copy
 * @src: pointer of char
 * @dest: pointer of char
 * @n: integer
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
	{
		for (; a < n; a++)

		dest[a] = '\0';


	}
	return (dest);
}
