#include "main.h"

/**
 * _strncat - A function that
 * concatenates two strings.
 * @dest: string to append by src
 * @src: string to append
 * @n: largest number of bytes to append
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
