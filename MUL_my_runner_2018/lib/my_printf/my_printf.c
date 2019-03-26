/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** print function, man 3 function
*/

#include "include/my_printf.h"

static const format_t array[] = {
    {'d', &display_decimal},
    {'i', &display_decimal},
    {'u', &display_unsigned_integer},
    {'c', &display_character},
    {'s', &display_string},
    {'S', &display_special},
    {'o', &display_octal},
    {'x', &display_hexa},
    {'X', &display_maj_hexa},
    {'p', &display_ptr_adress},
    {'%', &display_percent},
    {'#', &diese_management}
};

int move_in_array(char *str, int *i, va_list list)
{
    if (str[*i] == '0' || str[*i] == '.') {
            manage_dot(str, i, list);
            return (0);
    }
    for (int j = 0, c = 13; c > 0; j++, c--) {
        if (str[*i] == array[j].a && str[*i] == '#') {
            *i += 1;
            array[j].function_name(str, *i, list);
        }
        else if (str[*i] == array[j].a) {
            array[j].function_name(str, *i, list);
        }
    }
    return (0);
}

int my_printf(char *str, ...)
{
    va_list list;

    va_start(list, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i += 1;
            move_in_array(str, &i, list);
        } else
            my_putchar(str[i]);
    }
    return (0);
}
