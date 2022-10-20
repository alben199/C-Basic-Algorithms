/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** EPITECH Day 03 Task04 project
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar('P');
    } else if (n < 0){
        my_putchar('N');
    }
    return (0);
}
