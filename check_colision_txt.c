/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** check_colision
*/
#include "function.h"

#include <stdio.h>

static sfBool check_length(char **map, int y, int length, int pos)
{
    for (int x = pos; map[y][x] != '\0' && x >= 0 && x <= length + pos; x++) {
        if (map[y][x] == '1')
            return (sfTrue);
    }
    return (sfFalse);
}

sfBool is_in_colision(char **map, int width, int length, sfVector2f pos)
{
    for (int y = pos.y; map[y] != NULL && y >= 0 && y <= length + pos.y; y++) {
        if (check_length(map, y, width, pos.x))
            return (sfFalse);
    }
    return (sfTrue);
}
