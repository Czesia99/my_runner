/*
** EPITECH PROJECT, 2018
** viking_animations.c
** File description:
** viking animation functions, (move rect)
*/

#include <stdio.h>
#include "include/runner.h"

void viking_shield_up(game_t *gobject)
{
    gobject->anim->time = sfClock_getElapsedTime(gobject->anim->clock);
    gobject->anim->seconds = gobject->anim->time.microseconds / 1000000.0;
    if (gobject->anim->seconds >= 0.05) {
        move_action_rect(gobject, 372, 744);
        sfSprite_setTextureRect(gobject->viking->sprite, \
        gobject->viking->rect);
    }
    if (gobject->anim->seconds >= 1) {
        gobject->viking->rect.top = 0;
        gobject->naction = 0;
        sfMusic_play(gobject->music);
    }
}

void viking_attack(game_t *gobject)
{
    gobject->naction = 2;
    gobject->anim->time = sfClock_getElapsedTime(gobject->anim->clock);
    gobject->anim->seconds = gobject->anim->time.microseconds / 1000000.0;
    if (gobject->anim->seconds >= 0.05) {
        move_action_rect(gobject, 372, 1488);
        sfSprite_setTextureRect(gobject->viking->sprite, \
        gobject->viking->rect);
    }
    if (gobject->anim->seconds >= 0.4) {
        gobject->viking->rect.top = 0;
        gobject->naction = 0;
    }
}

void viking_jump(game_t *gobject)
{
    gobject->action->time = sfClock_getElapsedTime(gobject->action->clock);
    gobject->action->seconds = gobject->action->time.microseconds / 1000000.0;
    gobject->anim->time = sfClock_getElapsedTime(gobject->anim->clock);
    gobject->anim->seconds = gobject->anim->time.microseconds / 1000000.0;
    if (gobject->anim->seconds >= 0.05) {
        move_action_rect(gobject, 372, 1116);
        sfSprite_setTextureRect(gobject->viking->sprite, \
        gobject->viking->rect);
    }
    if (gobject->action->seconds <= gobject->varjump.d) {
        gobject->varjump.h = (-gobject->varjump.a * gobject->action->seconds *\
        gobject->action->seconds) - (gobject->varjump.b *\
        gobject->action->seconds) + 650;
        gobject->viking->pos.y = gobject->varjump.h;
        sfSprite_setPosition(gobject->viking->sprite, gobject->viking->pos);
    }
    if (gobject->action->seconds >= gobject->varjump.d) {
        gobject->viking->rect.top = 0;
        gobject->naction = 0;
    }
}

void viking_run(game_t *gobject)
{
    gobject->vclock->time = sfClock_getElapsedTime(gobject->vclock->clock);
    gobject->vclock->seconds = gobject->vclock->time.microseconds / 1000000.0;
    if (gobject->vclock->seconds >= 0.1) {
        move_run_rect(gobject, 372, 2976);
        sfSprite_setTextureRect(gobject->viking->sprite, \
        gobject->viking->rect);
        sfClock_restart(gobject->vclock->clock);
    }
    sfSprite_setPosition(gobject->viking->sprite, gobject->viking->pos);
}