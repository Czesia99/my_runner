/*
** EPITECH PROJECT, 2018
** format.c
** File description:
** display functions, nbr_base
*/

#include "include/my_printf.h"

void display_octal(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_put_nbr_base_u(va_arg(list, int), "01234567");
}

void display_hexa(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_put_nbr_base_u(va_arg(list, int), "0123456789abcdef");
}

void display_maj_hexa(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_put_nbr_base_u(va_arg(list, int), "0123456789ABCDEF");
}

void display_ptr_adress(char *format, int i, va_list list)
{
    (void)format;
    (void)i;
    my_putstr("0x");
    my_put_nbr_baselong(va_arg(list, int long), "0123456789abcdef");

}

void display_percent(char *format, int i, va_list list)
{
    (void)format;
    (void)list;
    (void)i;
    my_putchar('%');
}