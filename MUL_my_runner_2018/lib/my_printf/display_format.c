/*
** EPITECH PROJECT, 2018
** format.c
** File description:
** display functions
*/

#include "include/my_printf.h"

void display_decimal(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_put_nbr(va_arg(list, int));
}

void display_character(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_putchar(va_arg(list, int));
}

void display_string(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_putstr(va_arg(list, char *));
}

void display_unsigned_integer(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_put_nbr_unsigned(va_arg(list, unsigned int));
}

void display_special(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_putstr_special(va_arg(list, char *));
}