/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** my_strncmp
*/

#include "my.h"

int new_strlen(char const *str, int n)
{
    int i = 0;

    while (i < n || str[i] != '\0')
        i++;
    return (i);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = new_strlen(s1, n);
    int b = new_strlen(s2, n);
    int c = a - b;

    return (c);
}
