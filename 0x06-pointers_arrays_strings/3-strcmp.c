#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s2: paramater for string 2
 * @s1: paramater for string 1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] != '\0')
	{
		if (s1[b] < s2[b])
			return (s1[b] - s2[b]);
		if (s1[b] > s2[b])
			return (s1[b] - s2[b]);
		b++;
	}
	return (0);
}
