#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @src: parameter
 * @dest: parameter
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	return (dest);
}
