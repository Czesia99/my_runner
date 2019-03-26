/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** task03
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
