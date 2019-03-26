/*
** EPITECH PROJECT, 2018
** viking_moves.c
** File description:
** viking movement functions & move rect for animation
*/

#include "include/runner.h"

void viking_move_shield(game_t *gobject)
{
    gobject->naction = 3;
    gobject->viking->rect.left = 0;
    gobject->viking->rect.top = 1482;
    sfSprite_setTextureRect(gobject->viking->sprite, \
    gobject->viking->rect);
}

void viking_move_attack(game_t *gobject)
{
    gobject->naction = 2;
    gobject->viking->rect.left = 0;
    gobject->viking->rect.top = 372;
    sfSprite_setTextureRect(gobject->viking->sprite, \
    gobject->viking->rect);
}

void viking_move_up(game_t *gobject)
{
    gobject->naction = 1;
    gobject->viking->rect.left = 372;
    gobject->viking->rect.top = 1116;
    sfSprite_setTextureRect(gobject->viking->sprite, \
    gobject->viking->rect);
}

void viking_move_right(game_t *gobject)
{
    if (gobject->viking->pos.x + 282 <= 1920) {
        gobject->viking->pos.x += 10;
        sfSprite_setPosition(gobject->viking->sprite, gobject->viking->pos);
    }
}

void viking_move_left(game_t *gobject)
{
    if (gobject->viking->pos.x >= -90) {
        gobject->viking->pos.x -= 10;
        sfSprite_setPosition(gobject->viking->sprite, gobject->viking->pos);
    }
}