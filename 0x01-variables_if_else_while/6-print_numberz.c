#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10;)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
