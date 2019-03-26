/*
** EPITECH PROJECT, 2018
** clear.c
** File description:
** free & destroy functions
*/

#include "include/runner.h"

void clear_music(game_t *gobject)
{
    sfMusic_destroy(gobject->music);
    sfMusic_destroy(gobject->shout_shieldwall);
}

void clear_clocks(game_t *gobject)
{
    sfClock_destroy(gobject->vclock->clock);
    sfClock_destroy(gobject->action->clock);
    sfClock_destroy(gobject->anim->clock);
}

void clear_bgrd(game_t *gobject)
{
    obj_t *tmp;
    obj_t *next;

    next = gobject->bglist;
    while (next && next->next != NULL) {
        tmp = next;
        next = tmp->next;
        sfTexture_destroy(tmp->texture);
        sfSprite_destroy(tmp->sprite);
        free(tmp);
    }
}

void clear_viking(game_t *gobject)
{
    sfTexture_destroy(gobject->viking->texture);
    sfSprite_destroy(gobject->viking->sprite);
    free(gobject->viking);
}

void clear_all(game_t *gobject)
{
    clear_music(gobject);
    clear_clocks(gobject);
    clear_viking(gobject);
    clear_bgrd(gobject);
}