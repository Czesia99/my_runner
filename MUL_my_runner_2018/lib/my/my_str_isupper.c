/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** my_str_isupper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            continue;
        else
            return (0);
    }
    return (1);
}
