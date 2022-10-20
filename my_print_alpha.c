/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** EPITECH Day 03 Task01 project
*/

#include <unistd.h>

int my_print_alpha(void)
{
    int i;

    for (i = 97; i <= 122; i++)
        my_putchar(i);
    return (0);
}
