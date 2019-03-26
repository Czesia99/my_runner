/*
** EPITECH PROJECT, 2018
** lib.c
** File description:
** lib functions
*/

#include "include/my_printf.h"

int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb > 9)
        my_put_nbr (nb / 10);
    my_putchar(nb % 10 + 48);
    return (0);
}

long int my_put_nbr_baselong(long nb, char *base)
{
    int size = my_strlen(base);

    if (nb >= size)
        my_put_nbr_baselong(nb / size, base);
    my_putchar(base[nb % size]);
    return (0);
}

int my_put_nbr_base_u(unsigned int nb, char *base)
{
    unsigned int size = my_strlen(base);

    if (nb >= size)
        my_put_nbr_base(nb / size, base);
    my_putchar(base[nb % size]);

    return (0);
}

void s_maj(char const *str, int i)
{
    if (str[i] < 32) {
        my_putchar('\\');
        my_putchar('0');
        my_put_nbr_base(str[i], "01234567");
    }
    else
        my_putchar(str[i]);
}

int my_putstr_special(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 127) {
            my_putchar('\\');
            my_put_nbr_base(str[i], "01234567");
        } else if (str[i] < 8) {
            my_putchar('\\');
            my_putchar('0');
            my_putchar('0');
            my_put_nbr_base(str[i], "01234567");
        } else
            s_maj(str, i);
    }
    return (0);
}