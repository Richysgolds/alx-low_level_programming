#include "main.h"

/**
 * _strchr - A function that locates a vlue
 * @s: pointer to char
 * @c: char params to found
 * Return: Pointer to a memory area s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
