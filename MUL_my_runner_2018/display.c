/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** draw & display functions
*/

#include "include/runner.h"

void display_obstacles(window_t *window, game_t *gobject)
{
    obj_t *tmp;

    tmp = gobject->obstacle_list;
    while (tmp && tmp->next != NULL) {
        sfRenderWindow_drawSprite(window->window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
}

void display_viking(window_t *window, game_t *gobject)
{
    sfRenderWindow_drawSprite(window->window, gobject->viking->sprite, NULL);
}

void display_score(window_t *window, game_t *gobject)
{
    sfText_setString(gobject->score->text, "hello");
    sfRenderWindow_drawText(window->window, gobject->score->text, NULL);
}

void display_bgrd(window_t *window, game_t *gobject)
{
    obj_t *tmp;

    tmp = gobject->bglist;
    while (tmp && tmp->next != NULL) {
        sfRenderWindow_drawSprite(window->window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
}

void display_window(window_t *window, game_t *gobject)
{
    display_bgrd(window, gobject);
    display_viking(window, gobject);
    display_obstacles(window, gobject);
    display_score(window, gobject);
    if (gobject->menu == 2)
        victory_menu(gobject, window);
    if (gobject->menu == 3)
        defeat_menu(gobject, window);
    sfRenderWindow_display(window->window);
    sfRenderWindow_clear(window->window, sfBlack);
}