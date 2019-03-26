/*
** EPITECH PROJECT, 2018
** my_put_nbr_base.c
** File description:
** put nbr for any other base
*/

#include "my.h"

int my_put_nbr_base(int nb, char *base)
{
    int size = my_strlen(base);

    if (nb >= size)
        my_put_nbr_base(nb / size, base);
    my_putchar(base[nb % size]);

    return (0);
}
