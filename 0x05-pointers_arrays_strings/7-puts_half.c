#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: the string refernce
 * Return: 0
 */
void puts_half(char *str)
{
	int f, h;

	f = 0;
	while (str[f] != '\0')
		f++;

	h = f / 2;

	if (f % 2 == 1)
		h++;
	while (h < f)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
