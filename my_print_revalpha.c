/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** EPITECH Day 03 Task02 project
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    int i;

    for (i = 122; i >= 97; i--)
        my_putchar(i);
    return (0);
}
