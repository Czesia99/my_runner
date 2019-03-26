/*
** EPITECH PROJECT, 2018
** display_dot_format.c
** File description:
** dot management
*/

#include "include/my_printf.h"

void manage_dot(char *format, int *i, va_list list)
{
    int j = va_arg(list, int);
    int length = 1;
    int k = 0;
    int res = 0;

    (*i) += 1;
    while (format[*i] >= 48 && format[*i] <= 57) {
        res = 10 * res + (format[*i] - 48);
        (*i) += 1;
    }
    while (length <= j) {
        length = length *10;
        k += 1;
    }
    res = res - k;
    for (length = 0; length < res; length++)
        my_putchar('0');
    my_put_nbr(j);
}