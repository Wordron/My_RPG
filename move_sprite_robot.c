/*
** EPITECH PROJECT, 2023
** move_sprite.c
** File description:
** move_sprite
*/
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

static sfVector2f move_right_or_left(s_game *rpg)
{
    sfVector2f offset = {0, 0};

    if (rpg->key_pressed == rpg->controls->move_left) {
        offset = (sfVector2f){rpg->player->speed_space_map * (-1), 0};
        rpg->player->robot.rect = (sfIntRect){186, 0, 62, 70};
        sfSprite_setTextureRect(rpg->player->robot.sprite,
            rpg->player->robot.rect);
    } else if (rpg->key_pressed == rpg->controls->move_right) {
        offset = (sfVector2f){rpg->player->speed_space_map, 0};
        rpg->player->robot.rect = (sfIntRect){62, 0, 62, 70};
        sfSprite_setTextureRect(rpg->player->robot.sprite,
            rpg->player->robot.rect);
    }
    return (offset);
}

static sfVector2f move_up_or_down(s_game *rpg)
{
    sfVector2f offset = {0, 0};

    if (rpg->key_pressed == rpg->controls->move_down) {
        offset = (sfVector2f){0, rpg->player->speed_space_map};
        rpg->player->robot.rect = (sfIntRect){0, 0, 62, 70};
        sfSprite_setTextureRect(rpg->player->robot.sprite,
            rpg->player->robot.rect);
    } else if (rpg->key_pressed == rpg->controls->move_up) {
        offset = (sfVector2f){0, rpg->player->speed_space_map * (-1)};
        rpg->player->robot.rect = (sfIntRect){124, 0, 62, 70};
        sfSprite_setTextureRect(rpg->player->robot.sprite,
            rpg->player->robot.rect);
    }
    return (offset);
}

static sfVector2f check_how_to_move(s_game *rpg)
{
    sfVector2f offset = {0, 0};

    if (rpg->key_pressed == rpg->controls->move_left
        || rpg->key_pressed == rpg->controls->move_right)
        offset = move_right_or_left(rpg);
    else if (rpg->key_pressed == rpg->controls->move_down
        || rpg->key_pressed == rpg->controls->move_up)
        offset = move_up_or_down(rpg);
    if (rpg->key_pressed == -2) {
        rpg->player->robot.rect = (sfIntRect){
            rpg->player->robot.rect.left, 0, 62, 70};
        sfSprite_setTextureRect(rpg->player->robot.sprite,
            rpg->player->robot.rect);
    }
    return (offset);
}

static void check_colision(s_game *rpg, sfVector2u size, sfVector2f move,
    sfVector2f offset)
{
    sfVector2f temp_move = {0, 0};
    temp_move = move;
    temp_move.y = temp_move.y +
        sfSprite_getGlobalBounds(rpg->player->robot.sprite).height;
    if ((move.x <= size.x && move.x >= 0)
        && (move.y <= size.y && move.y >= 0))
        if ((rpg->scene_to_change == TROPICAL &&
            is_in_colision(rpg->all_planets->green->map_collision,
            rpg->player->robot.rect.height, 1, temp_move)) ||
            (rpg->scene_to_change == PABLO_HOUSE &&
            is_in_colision(rpg->pablo_house->map_collision,
            rpg->player->robot.rect.height, 1, temp_move)) ||
            (rpg->scene_to_change == ORANGE_PLANET &&
            is_in_colision(rpg->all_planets->orange->map_collision,
            rpg->player->robot.rect.height, 1, temp_move)) ||
            (rpg->scene_to_change == RABBIT_PLANETE &&
            is_in_colision(rpg->all_planets->rabbit->map_collision,
            rpg->player->robot.rect.height, 1, temp_move)) ||
            (rpg->scene_to_change == THRONE))
                sfSprite_move(rpg->player->robot.sprite, offset);
}

void move_sprite_robot(s_game *rpg, sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    sfVector2f move = {0, 0};
    sfVector2f offset = check_how_to_move(rpg);

    move.x = sfSprite_getPosition(rpg->player->robot.sprite).x + offset.x;
    move.y = sfSprite_getPosition(rpg->player->robot.sprite).y + offset.y;
    check_colision(rpg, size, move, offset);
}
