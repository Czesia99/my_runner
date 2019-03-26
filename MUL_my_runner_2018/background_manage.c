/*
** EPITECH PROJECT, 2018
** background_manage.c
** File description:
** background parallax
*/

#include "include/runner.h"

void move_object_background(obj_t *obj)
{
    if (obj->pos.x <= -1920)
        obj->pos.x = 0;
    else
        obj->pos.x -= obj->speed;
    sfSprite_setPosition(obj->sprite, obj->pos);
}

void move_parallax(game_t *gobject)
{
    obj_t *tmp;

    tmp = gobject->bglist;
    while (tmp && tmp->next != NULL) {
        move_object_background(tmp);
        tmp = tmp->next;
    }
}

obj_t *bgrd_create(game_t *gobject)
{
    obj_t *new;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 3840, 1080};
    float speed_array[4] = {7, 1, 0.7, 0.6};
    char *path_array[4] = {
        "ressources/bg/l2.png",
        "ressources/bg/l3.png",
        "ressources/bg/l4.png",
        "ressources/bg/l5.png"
    };

    gobject->bg = initialisation();
    for (int i = 0; i <= 3; i++) {
        new = create_object(path_array[i], pos, rect, speed_array[i]);
        new->next = gobject->bg;
        gobject->bg = new;
    }
    return (gobject->bg);
}