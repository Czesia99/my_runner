/*
** EPITECH PROJECT, 2018
** map_manage.c
** File description:
** map open file & error checking
*/

#include "include/runner.h"

int check_open(int a)
{
    if (a < 0) {
        write(2, "Invalid argument\n", 20);
        return (84);
    }
    return (0);
}

int check_map_errors(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] < 97 || buffer[i] > 101) {
            my_printf("map is no good bro\n");
            return (1);
        }
    }
    return (0);
}

char *check_file(char *av)
{
    int fd = 0;
    char *buffer;
    struct stat size;

    fd = open(av, O_RDONLY);
    check_open(fd);
    stat(av, &size);
    buffer = malloc(sizeof(char) * size.st_size + 1);
    read(fd, buffer, size.st_size);
    buffer[size.st_size] = '\0';
    if (check_map_errors(buffer) == 1)
        return (NULL);
    return (buffer);
}