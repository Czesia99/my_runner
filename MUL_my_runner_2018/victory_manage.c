/*
** EPITECH PROJECT, 2019
** victory_manage.c
** File description:
** victory & loss conditions functions
*/

#include "include/runner.h"

void check_victory(game_t *gobject)
{
    if ((gobject->viking->pos.x >= gobject->banner->pos.x && \
    gobject->viking->pos.x <= gobject->banner->pos.x + 383) && \
    (gobject->viking->pos.y >= gobject->banner->pos.y - 500 && \
    gobject->viking->pos.y <= gobject->banner->pos.y + 383))
        gobject->menu = 2;
}

void check_defeat(game_t *gobject)
{
    obj_t *tmp;

    tmp = gobject->obstacle_list;
    while (tmp && tmp->next != NULL) {
        if (((gobject->viking->pos.x + 260) >= tmp->pos.x && \
            (gobject->viking->pos.x + 260) <= tmp->pos.x + 333 && \
            gobject->viking->pos.y + 300 >= tmp->pos.y) && tmp->ID != 4)
            gobject->menu = 3;
        tmp = tmp->next;
    }
}