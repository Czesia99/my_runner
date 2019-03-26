/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** task05 day05
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    int a = 1;

    while (a != nb) {
        a = i * i;
        i = i + 1;
    }
    i = i - 1;
    return (i);
}
