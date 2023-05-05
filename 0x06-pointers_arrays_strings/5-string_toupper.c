#include "main.h"
/**
 * string_toupper - prints the uppercase of any lower case
 * @str: checker
 * Return: value
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
