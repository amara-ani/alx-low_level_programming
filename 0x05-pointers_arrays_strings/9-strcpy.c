#include "main.h"
/**
 * *_strcpy - copies contents of the ponter to another pointer
 * @dest: checker
 * @src: checker
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
