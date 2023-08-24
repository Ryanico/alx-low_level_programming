#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @z: string input
 * Return: string which is encodes
 */
char *rot13(char *z)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = z;

	while (*z)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*z == rot13[i])
			{
				*z = ROT13[i];
				break;
			}
		}
		z++;
	}
	return (ptr);
}
