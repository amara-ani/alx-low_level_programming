#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: checker1
 * @src: checker2
 * @n: the number
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < n)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	return (dest);
}
