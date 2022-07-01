#include <stdio.h>

/**
 *main -> assign a random number to a variable n each time it is executed and print the last digitnof the number stored in the variable n
 *Return : always 0
 */
int main(void)
{
        char ch;
        for (ch = '2'; ch >= 'a'; ch--)
        {
                putchar(ch);
        }
        putchar(10); /* this is an ascii code for new line*/
        

        return (0);
}

