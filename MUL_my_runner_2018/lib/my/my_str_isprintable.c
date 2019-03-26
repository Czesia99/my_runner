/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** my_str_isprintable
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] > 31  && str[i] < 127)
            continue;
        else
            return (0);
    }
    return (1);
}
