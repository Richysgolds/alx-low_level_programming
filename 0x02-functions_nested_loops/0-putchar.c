#include "main.h"

/**

 *main - prints _putchar     

 * 

 *Description: prints _putchar

 *Return: 0 (Success)     

 */

int main(void)                                                        

{                                                                   

                char s[9] = "_putchar";

                int i = 0;

                while (s[i] != '\0')

                {                                               

                _putchar(s[i]);

                i++;

                }                                               

_putchar('\n');

        return (0);                                   

}     
