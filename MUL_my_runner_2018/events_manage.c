/*
** EPITECH PROJECT, 2018
** events_manage.c
** File description:
** Events functions
*/

#include "include/runner.h"

void move_char(game_t *gobject)
{
    if (sfKeyboard_isKeyPressed(sfKeyD))
        viking_move_right(gobject);
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        viking_move_left(gobject);
    if ((sfKeyboard_isKeyPressed(sfKeyZ) || \
    (sfKeyboard_isKeyPressed(sfKeySpace))) && gobject->naction == 0) {
        viking_move_up(gobject);
        sfClock_restart(gobject->anim->clock);
        sfClock_restart(gobject->action->clock);
    }
    if (sfKeyboard_isKeyPressed(sfKeyJ) && gobject->naction == 0) {
        viking_move_attack(gobject);
        sfClock_restart(gobject->anim->clock);
    }
    if (sfKeyboard_isKeyPressed(sfKeyK) && gobject->naction == 0) {
        sfMusic_pause(gobject->music);
        sfMusic_play(gobject->shout_shieldwall);
        viking_move_shield(gobject);
        sfClock_restart(gobject->anim->clock);
    }
}

void close_window(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(window);
}

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    close_window(window, event);
}