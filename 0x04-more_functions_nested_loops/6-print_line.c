#include "main.h"
/**
 * print_line -  function that draws a straight line
 * @n: is in ASCII table
 * Return: Always 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
