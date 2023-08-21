#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps and stores the b address
 * @b: swaps and stores the a address
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
