#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: checked string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
