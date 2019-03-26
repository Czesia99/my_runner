/*
** EPITECH PROJECT, 2018
** clock_manage.c
** File description:
** clock management functions
*/

#include "include/runner.h"

myclock_t *clock_creation(void)
{
    myclock_t *my_clock = malloc(sizeof(*my_clock));
    my_clock->clock = sfClock_create();
    return (my_clock);
}