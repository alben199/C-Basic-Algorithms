/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** EPITECH Day 03 Task05 project
*/
#include <unistd.h>

int my_print_comb(void)
{
    int a = 0; int b = 1; int c = 2;
    while (a < 6 || b < 8 || c < 9){
        if (c == 10){
            b++;
            c = b + 1;
        }
        if (b == 9){
            a++;
            b = a + 1;
            c = b + 1;
        }
        my_putchar(a + 48);
        my_putchar(b + 48);
        my_putchar(c + 48);
        my_putchar(44);
        my_putchar(32);
        c++;
}
    write(1, "789", 3);
    return (0);
}
