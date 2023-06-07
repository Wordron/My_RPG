/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_player
*/
#include <stdlib.h>
#include "function.h"

static s_player *set_objetc_player(s_player *player)
{
    player->objects[2]->object = set_texture("texture/equipments.png",
        (sfVector2f){790, 580}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 70, 62, 70});
    player->objects[3]->object = set_texture("texture/equipments.png",
        (sfVector2f){790, 700}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 140, 62, 70});
    player->objects[4]->object = set_texture("texture/letter.png",
        (sfVector2f){645, 580}, (sfVector2f){0.6, 0.6},
        (sfIntRect){0, 0, 640, 640});
    player->objects[5]->object = set_texture("texture/letter.png",
        (sfVector2f){645, 710}, (sfVector2f){0.6, 0.6},
        (sfIntRect){0, 0, 640, 640});
}

static s_player *set_texture_player(s_player *player)
{
    player->robot = set_texture("texture/player/robot.png",
        (sfVector2f){100, 200}, (sfVector2f){1.5, 1.5},
        (sfIntRect){0, 0, 62, 70});
    player->objects[0]->object = set_texture("texture/letter.png",
        (sfVector2f){645, 450}, (sfVector2f){0.6, 0.6},
        (sfIntRect){0, 0, 640, 640});
    player->objects[1]->object = set_texture("texture/equipments.png",
        (sfVector2f){790, 450}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 62, 70});
    set_objetc_player(player);
    return (player);
}

static s_player *set_stats_player(s_player *player)
{
    player->player_stat = malloc(sizeof(s_character));
    player->player_stat->hp = 0;
    player->player_stat->max_hp = 0;
    player->player_stat->strength = 0;
    player->player_stat->defense = 0;
    player->player_stat->speed = 0;
    player->level = 0;
    player->spare_point = 0;
    player->speed_space_map = 10;
    player->text_attack = NULL;
    player->text_defense = NULL;
    player->text_speed = NULL;
    player->text_hp = NULL;
    player->text_max_hp = NULL;
    player->text_spare_points = NULL;
    return (player);
}

s_player *init_player(void)
{
    s_player *player = malloc(sizeof(s_player));

    player->xp = 0;
    player->xp_max = 100;
    player->objects = malloc(sizeof(t_button *) * 16);
    for (int i = 0; i != 16; i++)
        player->objects[i] = malloc(sizeof(t_button));
    set_stats_player(player);
    set_texture_player(player);
    player->objects[1]->state = NONE;
    player->objects[2]->state = NONE;
    player->objects[3]->state = NONE;
    player->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    return (player);
}

s_controls *init_controls(void)
{
    s_controls *controls = malloc(sizeof(s_controls));

    controls->interact = sfKeySpace;
    controls->menu = sfKeyEscape;
    controls->move_down = sfKeyDown;
    controls->move_left = sfKeyLeft;
    controls->move_right = sfKeyRight;
    controls->move_up = sfKeyUp;
    return (controls);
}
