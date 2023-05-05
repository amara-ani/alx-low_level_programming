#include "main.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (a = b; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

