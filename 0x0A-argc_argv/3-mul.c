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
	(void) argc;
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
