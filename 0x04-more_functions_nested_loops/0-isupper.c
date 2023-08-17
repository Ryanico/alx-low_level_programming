#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character
 * @c: is in ASCII table
 * Return: 1 is is uppercase and o if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
