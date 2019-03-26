/*
** EPITECH PROJECT, 2019
** menu_manage.c
** File description:
** menu management function
*/

#include "include/runner.h"

void victory_menu(game_t *gobject, window_t *window)
{
    gobject->viking->pos.y += 2500;
    gobject->banner->pos.y += 2500;
    sfText_setString(gobject->endgame->text, "VICTORY");
    sfRenderWindow_drawText(window->window, gobject->endgame->text, NULL);
}

void defeat_menu(game_t *gobject, window_t *window)
{
    gobject->viking->pos.y += 2500;
    gobject->banner->pos.y += 2500;
    sfText_setString(gobject->endgame->text, "DEFEAT");
    sfRenderWindow_drawText(window->window, gobject->endgame->text, NULL);
}

void set_score(game_t *gobject)
{
    gobject->sclock->time = sfClock_getElapsedTime(gobject->sclock->clock);
    gobject->sclock->seconds = gobject->sclock->time.microseconds / 1000000.0;
    if (gobject->sclock->seconds >= 1)
        gobject->score->point += 50;
}

void main_menu(game_t *gobject)
{
    (void)gobject;
}