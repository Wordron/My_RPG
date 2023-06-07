/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** move_sprite_spaceship
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
        rpg->player->player_stat->sprite_character.rect =
            (sfIntRect){270, 0, 90, 80};
        sfSprite_setTextureRect(
            rpg->player->player_stat->sprite_character.sprite,
            rpg->player->player_stat->sprite_character.rect);
    } else if (rpg->key_pressed == rpg->controls->move_right) {
        offset = (sfVector2f){rpg->player->speed_space_map, 0};
        rpg->player->player_stat->sprite_character.rect =
            (sfIntRect){180, 0, 90, 80};
        sfSprite_setTextureRect(
            rpg->player->player_stat->sprite_character.sprite,
            rpg->player->player_stat->sprite_character.rect);
    }
    return (offset);
}

static sfVector2f move_up_or_down(s_game *rpg)
{
    sfVector2f offset = {0, 0};

    if (rpg->key_pressed == rpg->controls->move_down) {
        offset = (sfVector2f){0, rpg->player->speed_space_map};
        rpg->player->player_stat->sprite_character.rect =
            (sfIntRect){70, 0, 90, 80};
        sfSprite_setTextureRect(
            rpg->player->player_stat->sprite_character.sprite,
            rpg->player->player_stat->sprite_character.rect);
    } else if (rpg->key_pressed == rpg->controls->move_up) {
        offset = (sfVector2f){0, rpg->player->speed_space_map * (-1)};
        rpg->player->player_stat->sprite_character.rect =
            (sfIntRect){0, 0, 90, 80};
        sfSprite_setTextureRect(
            rpg->player->player_stat->sprite_character.sprite,
            rpg->player->player_stat->sprite_character.rect);
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
        rpg->player->player_stat->sprite_character.rect = (sfIntRect){
            rpg->player->player_stat->sprite_character.rect.left, 90, 90, 80};
        sfSprite_setTextureRect(
            rpg->player->player_stat->sprite_character.sprite,
            rpg->player->player_stat->sprite_character.rect);
    }
    return (offset);
}

void move_sprite(s_game *rpg, sfRenderWindow *window)
{
    sfVector2u size = sfRenderWindow_getSize(window);
    sfVector2f move = {0, 0};
    sfVector2f offset = check_how_to_move(rpg);

    move.x = sfSprite_getPosition(
        rpg->player->player_stat->sprite_character.sprite).x + offset.x;
    move.y = sfSprite_getPosition(
        rpg->player->player_stat->sprite_character.sprite).y + offset.y;
    if ((move.x <= size.x + 530 && move.x >= 0)
        && (move.y <= size.y + 530 && move.y >= 0))
        sfSprite_move(rpg->player->player_stat->sprite_character.sprite,
            offset);
}
