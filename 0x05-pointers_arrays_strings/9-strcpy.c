#include "main.h"
/**
 * *_strcpy - copies contents of the ponter to another pointer
 * @dest: checker
 * @src: checker
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

