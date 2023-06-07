/*
** EPITECH PROJECT, 2023
** load_game.c
** File description:
** load the game
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include <stdio.h>
#include <stdio.h>

void take_space_ship(char *buff, s_game *rpg)
{
    char **array = NULL;

    array = get_my_array(buff);
    if (my_strcmp(array[2], "gray") == 0)
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->gray_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        return;
    if (my_strcmp(array[2], "green") == 0)
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->green_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        return;
    if (my_strcmp(array[2], "blue") == 0)
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->blue_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        return;
}

void fill_structure(s_game *rpg, int i, char *buff)
{
    if (i == 1)
        take_space_ship(buff, rpg);
    if (i == 2)
        rpg->player->xp = take_number(buff);
    if (i == 3)
        rpg->player->level = take_number(buff);
    if (i == 4)
        rpg->player->speed_space_map = take_number(buff);
    if (i == 5)
        rpg->player->player_stat->hp = take_number(buff);
    if (i == 6)
        rpg->player->player_stat->strength = take_number(buff);
    if (i == 7)
        rpg->player->player_stat->defense = take_number(buff);
    if (i == 8)
        rpg->player->player_stat->speed = take_number(buff);
    if (i == 9)
        rpg->player->player_stat->dead = take_number(buff);
    if (i == 10)
        rpg->player->spare_point = take_number(buff);
}

void check_pick_other_up_objet(s_game *rpg, char *buff, int i, char **array)
{
    if (i == 13)
        if (my_strcmp(array[2], "no") == 0)
            rpg->all_ennemies->en_5->loot->check_object = LEFT_ON_GROUND;
        else
            rpg->all_ennemies->en_5->loot->check_object = PICKED_UP;
    if (i == 14)
        if (my_strcmp(array[2], "no") == 0)
            rpg->all_ennemies->en_10->loot->check_object = LEFT_ON_GROUND;
        else
            rpg->all_ennemies->en_10->loot->check_object = PICKED_UP;
}

void check_pick_up_objet(s_game *rpg, char *buff, int i)
{
    char **array = get_my_array(buff);
    if (i == 10)
        if (my_strcmp(array[2], "no") == 0)
            rpg->space.letter->check_object = LEFT_ON_GROUND;
        else
            rpg->space.letter->check_object = PICKED_UP;
    if (i == 11)
        if (my_strcmp(array[2], "no") == 0)
            rpg->all_ennemies->en_1->loot->check_object = LEFT_ON_GROUND;
        else
            rpg->all_ennemies->en_1->loot->check_object = PICKED_UP;
    if (i == 12)
        if (my_strcmp(array[2], "no") == 0)
            rpg->all_ennemies->en_2->loot->check_object = LEFT_ON_GROUND;
        else
            rpg->all_ennemies->en_2->loot->check_object = PICKED_UP;
    check_pick_other_up_objet(rpg, buff, i, array);
}

int load_game(s_game *rpg, sfRenderWindow *window)
{
    FILE *dir = NULL;
    int i = 1;

    dir = fopen("save.txt", "r");
    if (dir == NULL) {
        return (1);
    } else {
        take_line(i, dir, rpg);
        rpg->player->player_stat->max_hp = rpg->player->player_stat->hp;
        rpg->player->xp_max = 100;
        display_stats(rpg);
        init_on_load_game(rpg);
        return 0;
    }
}
