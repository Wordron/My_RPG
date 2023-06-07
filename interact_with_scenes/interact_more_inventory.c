/*
** EPITECH PROJECT, 2023
** interact_more_inventory.c
** File description:
** more inventory
*/

#include "function.h"
#include "stdio.h"


static void change_button_scale(s_game *rpg, int i)
{
    if (i == 0) {
        sfSprite_setScale(rpg->all_button->speed_plus->object.sprite,
            (sfVector2f){0.40, 0.40});
        rpg->all_button->speed_plus->state = NONE;
    }
    if (i == 1) {
        sfSprite_setScale(rpg->all_button->strength_plus->object.sprite,
            (sfVector2f){0.40, 0.40});
        rpg->all_button->strength_plus->state = NONE;
    }
    if (i == 2) {
        sfSprite_setScale(rpg->all_button->hp_plus->object.sprite,
        (sfVector2f){0.40, 0.40});
        rpg->all_button->hp_plus->state = NONE;
    }
    if (i == 3) {
        sfSprite_setScale(rpg->all_button->defense_plus->object.sprite,
            (sfVector2f){0.40, 0.40});
        rpg->all_button->defense_plus->state = NONE;
    }
}

static void if_speed_plus_pressed(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_button->speed_plus->state)) {
        change_button_scale(rpg, 0);
        if (rpg->player->spare_point > 0) {
            rpg->player->spare_point = rpg->player->spare_point - 1;
            rpg->player->player_stat->speed =
                rpg->player->player_stat->speed + 10;
            rpg->player->speed_space_map = rpg->player->speed_space_map + 1;
            sfText_setString(rpg->player->text_spare_points,
                my_put_nbr(rpg->player->spare_point));
            sfText_setString(rpg->player->text_speed,
                my_put_nbr(rpg->player->player_stat->speed));
        }
    }
}

static void if_hp_plus_pressed(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_button->hp_plus->state)) {
        change_button_scale(rpg, 2);
        if (rpg->player->spare_point > 0) {
            rpg->player->spare_point = rpg->player->spare_point - 1;
            rpg->player->player_stat->max_hp =
                rpg->player->player_stat->max_hp + 50;
            rpg->player->player_stat->hp = rpg->player->player_stat->max_hp;
            sfText_setString(rpg->player->text_spare_points,
                my_put_nbr(rpg->player->spare_point));
            sfText_setString(rpg->player->text_max_hp,
                my_put_nbr(rpg->player->player_stat->max_hp));
            sfText_setString(rpg->player->text_hp,
                my_put_nbr(rpg->player->player_stat->hp));
        }
    }
}

static void other_inventory_change_if_pressed(s_game *rpg)
{
    if_speed_plus_pressed(rpg);
    if (IS_PRESSED(rpg->all_button->strength_plus->state)) {
        change_button_scale(rpg, 1);
        if (rpg->player->spare_point > 0) {
            rpg->player->spare_point = rpg->player->spare_point - 1;
            rpg->player->player_stat->strength =
                rpg->player->player_stat->strength + 10;
            sfText_setString(rpg->player->text_spare_points,
                my_put_nbr(rpg->player->spare_point));
            sfText_setString(rpg->player->text_attack,
            my_put_nbr(rpg->player->player_stat->strength));
        }
    }
}

void inventory_change_if_pressed(s_game *rpg)
{
    other_inventory_change_if_pressed(rpg);
    if_hp_plus_pressed(rpg);
    if (IS_PRESSED(rpg->all_button->defense_plus->state)) {
        change_button_scale(rpg, 3);
        if (rpg->player->spare_point > 0) {
            rpg->player->spare_point = rpg->player->spare_point - 1;
            rpg->player->player_stat->defense =
                rpg->player->player_stat->defense + 10;
            sfText_setString(rpg->player->text_spare_points,
                my_put_nbr(rpg->player->spare_point));
            sfText_setString(rpg->player->text_defense,
                my_put_nbr(rpg->player->player_stat->defense));
        }
    }
}
