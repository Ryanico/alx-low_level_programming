#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: string char type
 * @src: string char type
 * Description: copy the string pointed to by pointer `src`
 * to buffer pointed to by `dest`
 * Return: the pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
