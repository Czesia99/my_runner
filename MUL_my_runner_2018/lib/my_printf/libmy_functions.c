/*
** EPITECH PROJECT, 2018
** libmy_functions.c
** File description:
** libmy functions
*/

#include "include/my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar ('-');
    }
    if (nb > 9)
        my_put_nbr (nb / 10);
    my_putchar(nb % 10 + 48);
    return (0);
}

int my_put_nbr_base(int nb, char *base)
{
    int size = my_strlen(base);

    if (nb >= size)
        my_put_nbr_base(nb / size, base);
    my_putchar(base[nb % size]);
    return (0);
}