#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * @c: is in ASCII table
 *
 * Return: 1 lowercase character and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
