#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: the string pointer
 * Return: string and a newline
 */
void _puts(char *str)
{
	int z = 0;

	while (str[z])
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
