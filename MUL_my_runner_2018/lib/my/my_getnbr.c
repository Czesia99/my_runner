/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** getnbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int signe = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb * 10 + (str[i] - 48);
        }
        else if (str[i] == 45)
            signe = signe * -1;
        else
            return (nb * signe);
    }
    return (nb * signe);
}
