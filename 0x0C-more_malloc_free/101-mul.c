#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains digit only
 * @str: string to check
 *
 * Return: 1 if str contains only digits, 0 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}

	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	long int num1, num2, result;
	char *endptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtol(argv[1], &endptr, 10);
	num2 = strtol(argv[2], &endptr, 10);
	result = num1 * num2;

	printf("%ld\n", result);

	return (0);
}
