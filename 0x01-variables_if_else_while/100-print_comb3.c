#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	while (i <= j)
	{
		while (j <= i)
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == 8 && j == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
j++;			}
		}
	}
j == 0;
i++;
return (0);
}
