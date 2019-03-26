/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** structures
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "my_printf.h"

typedef struct format_s
{
    char a;
    void (*function_name)(char *, int i, va_list);

}format_t;

#endif /* !STRUCT_H_ */
