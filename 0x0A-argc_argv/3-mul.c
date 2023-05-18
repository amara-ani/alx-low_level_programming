#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguments passed
 * @argc: counts arguments
 * @argv: holds array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, count;

	count = 1;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
			{
			count *= atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
