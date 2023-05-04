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

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
