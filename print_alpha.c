/* Write a function that, beginning with 'a',
** displays the lowercase alphabet in ascending order, on a single line.
** 
** 
** 
*/

#include <unistd.h>

int print_alpha(void)
{
    int i;

    for (i = 97; i <= 122; i++)
        putchar(i);
    return (0);
}
