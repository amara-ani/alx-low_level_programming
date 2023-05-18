#include <stdio.h>
#include <stdlib.h>
/**
 * main - add arguments passed
 * @argc: counts arguments
 * @argv: holds array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, count;

	count = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
			{
				count += atoi(argv[i]);
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
