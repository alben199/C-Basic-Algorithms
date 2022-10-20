/*
** Write a function that displays all the digits,
** on a single line, in ascending order.
** 
** 
*/

#include <unistd.h>

int my_print_digits(void)
{
    int i;

    for (i = 48; i != 58; i++)
        putchar(i);
    return (0);
}
