/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** task02
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}