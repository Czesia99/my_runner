/*
** EPITECH PROJECT, 2018
** runner.h
** File description:
** my_runner includes, structures & prototypes
*/

#ifndef RUNNER_H_
#define RUNNER_H_

//------includes------

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include "../lib/my/my.h"
#include "../lib/my_printf/include/my_printf.h"

//------structures------

typedef struct window_s
{
    sfVideoMode vm;
    sfRenderWindow *window;
    sfEvent event;
} window_t;

typedef struct s_clock
{
    sfClock *clock;
    sfTime time;
    float seconds;
} myclock_t;

typedef struct obj_s
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
    sfFont *font;
    sfText *text;
    float speed;
    int point;
    int ID;
    struct obj_s *first;
    struct obj_s *next;
} obj_t;

typedef struct list_s
{
    obj_t *first;
} list_t;

typedef struct var_s
{
    float d; //duree du saut
    float h; //position en hauteur
    float t; //time
    float a; //paramètre parabole
    float b; //parametre parabole
} var_t;

typedef struct obstacle_s
{
    char a;
    char *p;
    int y;
} obstacle_t;

typedef struct game_s
{
    obj_t *bg;
    obj_t *bglist;
    obj_t *obstacle;
    obj_t *obstacle_list;
    obj_t *viking;
    obj_t *banner;
    obj_t *endgame;
    obj_t *score;
    myclock_t *vclock;
    myclock_t *anim;
    myclock_t *action;
    myclock_t *sclock;
    var_t varjump;
    sfMusic *music;
    sfMusic *shout_shieldwall;
    int naction;
    int menu;
    char *map;
} game_t;

//------prototypes------

//window_manage.c
window_t *window_param(void);
void window_create(char *map);

//events_manage.c
void move_char(game_t *gobject);
void close_window(sfRenderWindow *window, sfEvent event);
void analyse_events(sfRenderWindow *window, sfEvent event);

//object_manage.c
obj_t *create_banner(sfVector2f pos);
game_t *game_objects_creator(char *map);
obj_t *create_obstacle(char *path, sfVector2f pos, sfIntRect rect, \
sfVector2f scale);
obj_t *create_object(char *path, sfVector2f pos, sfIntRect rect, float speed);

//viking_manage.c
void move_action_rect(game_t *gobject, int offset, int max);
void move_run_rect(game_t *gobject, int offset, int max);
obj_t *viking_create(game_t *gobject);

//viking_moves.c
void viking_move_shield(game_t *gobject);
void viking_move_attack(game_t *gobject);
void viking_move_up(game_t *gobject);
void viking_move_right(game_t *gobject);
void viking_move_left(game_t *gobject);

//viking_animations.c
void viking_shield_up(game_t *gobject);
void viking_attack(game_t *gobject);
void viking_jump(game_t *gobject);
void viking_run(game_t *gobject);

//background_manage.c
void move_object_background(obj_t *obj);
void move_parallax(game_t *gobject);
obj_t *bgrd_create(game_t *gobject);

//clocks_manage.c
myclock_t *clock_creation(void);

//initialisation.c
game_t *music_create(game_t *gobject);
game_t *variable_create(game_t *gobject);

//linked_list.c
obj_t *initialisation(void);

//running_game.c
void run_game(game_t *gobject);

//display.c
void display_score(window_t *window, game_t *gobject);
void display_obstacles(window_t *window, game_t *gobject);
void display_viking(window_t *window, game_t *gobject);
void display_bgrd(window_t *window, game_t *gobject);
void display_window(window_t *window, game_t *gobject);

//clear.c
void clear_clocks(game_t *gobject);
void clear_viking(game_t *gobject);
void clear_bgrd(game_t *gobject);
void clear_all(game_t *gobject);

//map_manage.c
void move_object_obstacle(obj_t *obj);
void move_obstacles(game_t *gobject);
obj_t *obstacles_create(game_t *gobject);
obj_t *banner_in_list(game_t *gobject, int p, obj_t *new);

//map_file_manage.c
int check_map_errors(char *buffer);
int check_open(int a);
char *check_file(char *av);

//victory_manage.c
void check_defeat(game_t *gobject);
void check_victory(game_t *gobject);

//menu_manage.c
void set_score(game_t *gobject);
void defeat_menu(game_t *gobject, window_t *window);
void victory_menu(game_t *gobject, window_t *window);
void main_menu(game_t *gobject);

//text_create.c
obj_t *setup_score(game_t *gobject);
obj_t *text_create(game_t *gobject);

//manual.c
char *my_put_scr(int nb);
void display_manual(void);

#endif /* !RUNNER_H_ */
