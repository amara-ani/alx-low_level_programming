#include "main.h"
#include <stdlib.h>

/**
* *argstostr - concatinating all arguents together
* @ac:count argument
* @av: array of arguments
* Return: pointer to new space in memory or null
**/
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	/* count the number of chars in each string */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			size++;
		size++;
	}
	size++;

	/**
	 * allocate memory for total number of chars and
	 * new line for each word
	 */
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c++] = av[a][b];
		}
		str[c++] = '\n';
	}
	str[c] = '\0';
	return (str);
}
