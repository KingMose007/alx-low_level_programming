#include <stdio.h>
#include <stdlib.h>

/**
 * main - a code that prints opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 * or 2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
