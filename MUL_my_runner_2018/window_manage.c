/*
** EPITECH PROJECT, 2018
** window_manage.c
** File description:
** window management functions
*/

#include "include/runner.h"

window_t *window_param(void)
{
    window_t *window = malloc(sizeof(*window));
    sfVideoMode mode = {1920, 1080, 64};
    window->vm = mode;
    window->window = \
    sfRenderWindow_create(window->vm, "my runner", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 70);
    return (window);
}

void window_create(char *map)
{
    window_t *window = window_param();
    game_t *gobject = game_objects_creator(map);

    sfMusic_play(gobject->music);
    while (sfRenderWindow_isOpen(window->window)) {
        while (sfRenderWindow_pollEvent(window->window, &window->event))
            analyse_events(window->window, window->event);
        run_game(gobject);
        display_window(window, gobject);
    }
    clear_all(gobject);
    sfRenderWindow_destroy(window->window);
}