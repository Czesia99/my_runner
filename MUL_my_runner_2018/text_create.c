/*
** EPITECH PROJECT, 2019
** text_create.c
** File description:
** text functions
*/

#include "include/runner.h"

obj_t *text_create(game_t *gobject)
{
    sfVector2f scale = {2, 2};
    sfVector2f pos = {820, 500};
    gobject->endgame = malloc(sizeof(*gobject->endgame));
    gobject->endgame->text = sfText_create();
    gobject->endgame->font = sfFont_createFromFile("ressources/font.TTF");
    gobject->endgame->pos = pos;
    gobject->endgame->scale = scale;
    sfText_setPosition(gobject->endgame->text, gobject->endgame->pos);
    sfText_setFont(gobject->endgame->text, gobject->endgame->font);
    sfText_setScale(gobject->endgame->text, gobject->endgame->scale);
    return (gobject->endgame);
}

obj_t *setup_score(game_t *gobject)
{
    sfVector2f scale = {1, 1};
    sfVector2f pos = {950, 540};
    gobject->score = malloc(sizeof(*gobject->score));
    gobject->score->text = sfText_create();
    gobject->score->font = sfFont_createFromFile("ressources/font.TTF");
    gobject->score->pos = pos;
    gobject->score->scale = scale;
    gobject->score->point = 0;
    sfText_setPosition(gobject->score->text, gobject->score->pos);
    sfText_setFont(gobject->score->text, gobject->score->font);
    sfText_setScale(gobject->score->text, gobject->score->scale);
    return (gobject->score);
}