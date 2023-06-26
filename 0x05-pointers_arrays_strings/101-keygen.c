#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int sum = 2772;
	char c;

	srand(time(0));

	while (sum > 122)
	{
		c = (rand() % (122 - 97 + 1)) + 97;
		printf("%c", c);
		sum -= c;
	}
	printf("%c", sum);

	return (0);
}
