/*
** EPITECH PROJECT, 2018
** linked_list.c
** File description:
** linked list functions
*/

#include "include/runner.h"

obj_t *initialisation(void)
{
    obj_t *list = malloc(sizeof(*list));

    if (list == NULL)
        return (list);
    list->first = NULL;
    list->next = NULL;
    return (list);
}