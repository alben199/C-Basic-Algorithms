/*
** Write a function that displays either N if
** the integer passed as parameter is negative or P,
** if positive or null.
** 
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0){
        putchar('P');
    } else if (n < 0){
        putchar('N');
    }
    return (0);
}
