/*
** EPITECH PROJECT, 2018
** variables_manage.c
** File description:
** initialisation functions file
*/

#include "include/runner.h"

game_t *music_create(game_t *gobject)
{
    gobject->music = sfMusic_createFromFile("ressources/music.ogg");
    gobject->shout_shieldwall = sfMusic_createFromFile("ressources/wall.ogg");
    return (gobject);
}

game_t *variable_create(game_t *gobject)
{
    gobject->naction = 0;
    gobject->menu = 0;
    gobject->varjump.d = 1.5;
    gobject->varjump.a = -2000 / (gobject->varjump.d * gobject->varjump.d);
    gobject->varjump.b = -gobject->varjump.a * gobject->varjump.d;
    return (gobject);
}