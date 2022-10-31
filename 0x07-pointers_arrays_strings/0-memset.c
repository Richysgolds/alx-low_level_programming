#include "main.h"

/**
 * _memset - A function that fills
 * memory with a constant byte
 * @f: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill
 * Return: pointer to memory area f
 */
char *_memset(char *f, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(f + i) = b;
}
return (f);
}
