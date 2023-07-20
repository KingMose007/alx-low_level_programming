#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs the simple operations.
 * @argc: number of arguments passed.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}
