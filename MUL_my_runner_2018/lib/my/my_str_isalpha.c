/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 65 && str[i] <= 90)
                continue;
            else if (str[i] >= 97 && str[i] <= 122)
                continue;
            else
                return (0);
    }
    return (1);
}
