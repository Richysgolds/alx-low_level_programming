#include <stdio.h>

/**
 *main - Main block
 *Description:  Print the alphabet in lowercase letters, except for e and q
 *Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
