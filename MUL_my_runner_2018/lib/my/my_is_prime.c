/*
** EPITECH PROJECT, 2018
** my_is_prime.c
** File description:
** my_is_prime
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb % 2 == 0 && nb != 2)
        return (0);
    if (nb == 1 || nb == 3 || nb == 5 || nb == 2)
        return (1);
    for (int i = 5; i < nb; i += 2) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
