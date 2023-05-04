#include "main.h"
/**
 * *_strcpy - copies contents of the ponter to another pointer
 * @dest: checker
 * @src: checker
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (src[index])	
	{
        	dest[index] = '\0';
		index++;
	}
	return (dest);
}

