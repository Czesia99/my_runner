/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** my_runner main
*/

#include "include/runner.h"

int main(int ac, char **av)
{
    char *map;

    if (ac != 2) {
        my_printf("Wrong number of arguments\n");
        return (84);
    } else if (av[1][0] == '-' && av[1][1] == 'h')
        display_manual();
    else {
        if (check_file(av[1]) == NULL)
            return (84);
        map = check_file(av[1]);
        window_create(map);
    }
    return (0);
}