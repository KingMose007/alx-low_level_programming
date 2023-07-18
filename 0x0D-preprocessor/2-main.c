#include <stdio.h>

/**
 * main - prints name of the file it was compiled from, followed by  new line
 *
 * Return: 0 if successful
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
