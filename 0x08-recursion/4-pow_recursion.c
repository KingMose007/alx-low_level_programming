#include "main.h"

/**
 * _pow_recursion - return x to power y
 * @x: the value to multiply
 * @y: the times to multiply the value
 *
 * return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < o)
		return (-1);
	if (y == 0)
		return (1);
	return (x * pow_recursion(x, y-1));
}
