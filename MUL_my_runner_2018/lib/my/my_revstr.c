/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    int k;
    char strcp;

    for (len = 0; str[len] != '\0'; len++);
    len = len - 1;
    k = len / 2;
    while (i <= k) {
        strcp = str[i];
        str[i] = str[len];
        str[len] = strcp;
        i++;
        len--;
    }
    return (str);
}