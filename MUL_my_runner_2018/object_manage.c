/*
** EPITECH PROJECT, 2018
** object_manage.c
** File description:
** objects creation & manage functions
*/

#include "include/runner.h"

game_t *game_objects_creator(char *map)
{
    game_t *gobject = malloc(sizeof(*gobject));
    gobject->bglist = bgrd_create(gobject);
    gobject->vclock = clock_creation();
    gobject->anim = clock_creation();
    gobject->action = clock_creation();
    gobject->sclock = clock_creation();
    gobject->viking = viking_create(gobject);
    gobject->map = map;
    gobject->obstacle_list = obstacles_create(gobject);
    gobject->endgame = text_create(gobject);
    gobject->score = setup_score(gobject);
    gobject = music_create(gobject);
    gobject = variable_create(gobject);
    return (gobject);
}

obj_t *create_obstacle(char *path, sfVector2f pos, sfIntRect rect, \
sfVector2f scale)
{
    obj_t *obj = malloc(sizeof(*obj));
    obj->pos = pos;
    obj->rect = rect;
    obj->scale = scale;
    obj->texture = sfTexture_createFromFile(path, NULL);
    obj->sprite = sfSprite_create();
    sfSprite_scale(obj->sprite, obj->scale);
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    return (obj);
}

obj_t *create_object(char *path, sfVector2f pos, sfIntRect rect, float speed)
{
    obj_t *obj = malloc(sizeof(*obj));
    obj->pos = pos;
    obj->rect = rect;
    obj->speed = speed;
    obj->ID = 5;
    obj->texture = sfTexture_createFromFile(path, NULL);
    obj->sprite = sfSprite_create();
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    return (obj);
}

obj_t *create_banner(sfVector2f pos)
{
    obj_t *obj = malloc(sizeof(*obj));
    sfIntRect rect = {0, 0, 380, 645};
    obj->rect = rect;
    obj->pos = pos;
    obj->ID = 4;
    obj->texture = sfTexture_createFromFile("ressources/banner.png", NULL);
    obj->sprite = sfSprite_create();
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    return (obj);
}
