/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** my_str_islower
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            continue;
        else
            return (0);
    }
    return (1);
}
