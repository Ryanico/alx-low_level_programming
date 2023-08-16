#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @g: is in ASCII table
 *
 * Return: Absolute value
 */
int _abs(int g)
{
	if (g >= 0)
	{
		return (g);
	}
	else
	{
		return (g * -1);
	}
	_putchar('\n');
}
