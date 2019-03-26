/*
** EPITECH PROJECT, 2019
** manual.c
** File description:
** manual functions + utility function
*/

#include "include/runner.h"

char *my_put_scr(int nb)
{
    char *str = malloc(sizeof(char) * 13);
    int tmp;
    int i = -1;

    for (int compt =  nb; compt >= 1; i++)
        compt = compt / 10;
    tmp = i;
    while (nb >= 1) {
        str[i] = nb % 10 + 48;
        nb = nb / 10;
        i--;
    }
    str[tmp + 1] = '\0';
    if (str[0] == '\0') {
        str[0] = '0';
        str[1] = '\0';
    }
    return (str);
}

void display_manual(void)
{
    my_printf("\nmy_runner game manual\n\n");
    my_printf("USAGE\n");
    my_printf("./my_runner [MAP]\n\n");
    my_printf("DESCRIPTION\n");
    my_printf("The goal of the game is to survive as much as possible\n");
    my_printf("by jumping or attacking\nif you hit an obstacle or an ennemie");
    my_printf(" you'll loose\n");
    my_printf("Reach the end of the map to win !\ngood luck !\n\n");
    my_printf("CONTROLS\n");
    my_printf("q = player go left\n");
    my_printf("d = player go right\n");
    my_printf("z, space = player jump\n");
    my_printf("j = player attack\n");
    my_printf("k = player defend\n\n");
}