/*
** EPITECH PROJECT, 2018
** format.c
** File description:
** display functions, with diez after percent
*/

#include "include/my_printf.h"

void diese_management(char *format, int i, va_list list)
{
    if (format[i] == 'o') {
        my_putchar('0');
        my_put_nbr_base_u(va_arg(list, int), "01234567");
    }
    if (format[i] == 'x') {
        my_putchar('0');
        my_putchar('x');
        my_put_nbr_base_u(va_arg(list, int), "0123456789abcdef");
    }
    if (format[i] == 'X') {
        my_putchar('0');
        my_putchar('X');
        my_put_nbr_base_u(va_arg(list, int), "0123456789ABCDEF");
    }
}
