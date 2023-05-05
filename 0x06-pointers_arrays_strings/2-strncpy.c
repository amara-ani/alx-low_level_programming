#include "main.h"
/**
 * _strncpy - two pointers having same content
 * @src: checker
 * @dest: checker
 * @n: size of number
* Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (c != n)
	{
		dest[d] = src[c];
		d++;
		c++;
		if (src[c] == '\0')
		{
			break;
		}
	}
	while (d != n)
		dest[d++] = '\0';
	return (dest);
}
