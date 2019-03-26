/*
** EPITECH PROJECT, 2018
** running_game.c
** File description:
** all functions that make the game
*/

#include "include/runner.h"

void run_game(game_t *gobject)
{
    static void (*funct[4])(game_t *) = {viking_run, viking_jump, \
    viking_attack, viking_shield_up};

    for (int i = 0; i < 4; i += 1)
        if (gobject->naction == i)
            funct[i](gobject);
    set_score(gobject);
    move_char(gobject);
    move_parallax(gobject);
    move_obstacles(gobject);
    check_defeat(gobject);
    check_victory(gobject);
}