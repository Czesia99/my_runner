/*
** EPITECH PROJECT, 2019
** map_manage.c
** File description:
** map management functions
*/

#include "include/runner.h"

static const obstacle_t obstacle_array[] = {
    {'a', "ressources/obstacles/1.png", 820},
    {'b', "ressources/obstacles/2.png", 820},
    {'c', "ressources/obstacles/3.png", 835},
    {'d', "ressources/obstacles/4.png", 800}
};

void move_object_obstacle(obj_t *obj)
{
    obj->pos.x -= 7;
    sfSprite_setPosition(obj->sprite, obj->pos);
}

void move_obstacles(game_t *gobject)
{
    obj_t *tmp;

    tmp = gobject->obstacle_list;
    while (tmp && tmp->next != NULL) {
        move_object_obstacle(tmp);
        tmp = tmp->next;
    }
}

obj_t *obstacles_create(game_t *gobject)
{
    obj_t *new;
    static int p = 0;
    sfVector2f scale = {0.7, 0.7};
    sfIntRect rect = {0, 0, 333, 349};

    gobject->obstacle = initialisation();
    for (int i = 0; gobject->map[i] != '\0'; i++) {
        for (int j = 0; j <= 3; j++) {
            if (gobject->map[i] == obstacle_array[j].a) {
                p = p + 900 + (rand() % (600 - 50 + 1)) + 50;
                sfVector2f pos = {1950 + p, obstacle_array[j].y};
                new = create_obstacle(obstacle_array[j].p, pos, rect, scale);
                new->next = gobject->obstacle;
                gobject->obstacle = new;
            }
        }
    }
    banner_in_list(gobject, p, new);
    return (gobject->obstacle);
}

obj_t *banner_in_list(game_t *gobject, int p, obj_t *new)
{
    p = p + 900 + (rand() % (600 - 50 + 1)) + 50;
    sfVector2f pos = {1950 + p, 380};
    new = create_banner(pos);
    gobject->banner = new;
    new->next = gobject->obstacle;
    gobject->obstacle = new;
    return (gobject->obstacle);
}