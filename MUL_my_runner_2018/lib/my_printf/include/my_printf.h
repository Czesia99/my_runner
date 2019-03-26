/*
** EPITECH PROJECT, 2018
** my_printf.h
** File description:
** my_printf headers
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

//includes
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "struct.h"
#include "my.h"

//my_printf
int my_printf(char *format, ...);

//check format functions
void check_format_min(char *format, int i, va_list list);
void check_format_special(char *format, int i, va_list);

//display functions
void display_decimal(char *format, int i, va_list list);
void display_character(char *format, int i, va_list list);
void display_string(char *format, int i, va_list list);
void display_octal(char *format, int i, va_list list);
void display_hexa(char *format, int i, va_list list);
void display_maj_hexa(char *format, int i, va_list list);
void display_percent(char *format, int i, va_list list);
void display_unsigned_integer(char *format, int i, va_list list);
void display_ptr_adress(char *format, int i, va_list list);
void display_special(char *format, int i, va_list list);

//diez
void diese_management (char *format, int i, va_list list);

//dot
void manage_dot(char *format, int *i, va_list list);

//put_nbr functions
int my_put_nbr_unsigned(unsigned int nb);
long int my_put_nbr_baselong(long int nb, char *base);
int my_put_nbr_base_u(unsigned int nb, char *base);
int my_putstr_special(char const *str);
void s_maj (char const *str, int i);

//libmy functions
int my_put_nbr(int nb);
void my_putchar(char c);
int my_put_nbr_base(int nb, char *base);

#endif /* !MY_PRINTF_H_ */
