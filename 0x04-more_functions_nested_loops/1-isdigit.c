#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit
 * @c: is in ASCII table
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
