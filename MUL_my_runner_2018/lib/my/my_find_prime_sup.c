/*
** EPITECH PROJECT, 2018
** my_find_prime_sup.c
** File description:
** my_find_prime_sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int a = 0;

    a = my_is_prime(nb);
    while (a != 1) {
        nb += 1;
        a = my_is_prime(nb);
    }
    return (nb);
}