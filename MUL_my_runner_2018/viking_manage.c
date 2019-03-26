/*
** EPITECH PROJECT, 2018
** viking_manage.c
** File description:
** game hero management functions
*/

#include "include/runner.h"

void move_action_rect(game_t *gobject, int offset, int max)
{
    if (offset + (gobject->viking->rect).left >= max)
        (gobject->viking->rect).left += 0;
    else
        (gobject->viking->rect).left += offset;
}

void move_run_rect(game_t *gobject, int offset, int max)
{
    if (offset + (gobject->viking->rect).left >= max)
        (gobject->viking->rect).left = 0;
    else
        (gobject->viking->rect).left += offset;
}

obj_t *viking_create(game_t *gobject)
{
    sfVector2f pos = {0, 650};
    sfIntRect rect = {0, 0, 372, 372};
    gobject->viking = create_object("ressources/viking.png", pos, rect, 0);
    return (gobject->viking);
}