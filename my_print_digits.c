/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** EPITECH Day 03 Task03 project
*/

#include <unistd.h>

int my_print_digits(void)
{
    int i;

    for (i = 48; i != 58; i++)
        my_putchar(i);
    return (0);
}
