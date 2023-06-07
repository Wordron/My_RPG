/*
** EPITECH PROJECT, 2023
** interact_other_inventory.c
** File description:
** inventory
*/

#include "function.h"
#include "stdio.h"

static void equipement_one_if_pressed(s_game *rpg, int j)
{
    if (j == 0) {
        sfSprite_setPosition(rpg->player->objects[1]->object.sprite,
        (sfVector2f){940, 590});
        rpg->player->objects[1]->state = NONE;
        rpg->all_ennemies->en_1->loot->is_equipped = 1;
        rpg->player->player_stat->strength = rpg->player->player_stat->strength
            + rpg->all_ennemies->en_1->loot->add_strength;
        sfText_setString(rpg->player->text_attack,
            my_put_nbr(rpg->player->player_stat->strength));
    } else {
        sfSprite_setPosition(rpg->player->objects[1]->object.sprite,
        (sfVector2f){790, 450});
        rpg->player->objects[1]->state = NONE;
        rpg->all_ennemies->en_1->loot->is_equipped = 0;
        rpg->player->player_stat->strength = rpg->player->player_stat->strength
            - rpg->all_ennemies->en_1->loot->add_strength;
        sfText_setString(rpg->player->text_attack,
            my_put_nbr(rpg->player->player_stat->strength));
    }
}

static void equipement_two_if_pressed(s_game *rpg, int j)
{
    if (j == 0) {
        sfSprite_setPosition(rpg->player->objects[2]->object.sprite,
        (sfVector2f){940, 450});
        rpg->player->objects[2]->state = NONE;
        rpg->all_ennemies->en_2->loot->is_equipped = 1;
        rpg->player->player_stat->speed = rpg->player->player_stat->speed
            + rpg->all_ennemies->en_2->loot->add_speed;
        sfText_setString(rpg->player->text_speed,
            my_put_nbr(rpg->player->player_stat->speed));
    } else {
        sfSprite_setPosition(rpg->player->objects[2]->object.sprite,
        (sfVector2f){790, 590});
        rpg->player->objects[2]->state = NONE;
        rpg->all_ennemies->en_2->loot->is_equipped = 0;
        rpg->player->player_stat->speed = rpg->player->player_stat->speed
            - rpg->all_ennemies->en_2->loot->add_speed;
        sfText_setString(rpg->player->text_speed,
            my_put_nbr(rpg->player->player_stat->speed));
    }
}

static void equipement_three_if_pressed(s_game *rpg, int j)
{
    if (j == 0) {
        sfSprite_setPosition(rpg->player->objects[3]->object.sprite,
        (sfVector2f){940, 700});
        rpg->player->objects[3]->state = NONE;
        rpg->all_ennemies->en_5->loot->is_equipped = 1;
        rpg->player->player_stat->defense = rpg->player->player_stat->defense
            + rpg->all_ennemies->en_5->loot->add_defense;
        sfText_setString(rpg->player->text_defense,
            my_put_nbr(rpg->player->player_stat->defense));
    } else {
        sfSprite_setPosition(rpg->player->objects[3]->object.sprite,
        (sfVector2f){790, 700});
        rpg->player->objects[3]->state = NONE;
        rpg->all_ennemies->en_5->loot->is_equipped = 0;
        rpg->player->player_stat->defense = rpg->player->player_stat->defense
            - rpg->all_ennemies->en_5->loot->add_defense;
        sfText_setString(rpg->player->text_defense,
            my_put_nbr(rpg->player->player_stat->defense));
    }
}

void if_zero_equiped(sfRenderWindow *window, s_game *rpg)
{
    if (IS_PRESSED(rpg->player->objects[1]->state) &&
        rpg->all_ennemies->en_1->loot->is_equipped == 0) {
        equipement_one_if_pressed(rpg, 0);
    }
    if (IS_PRESSED(rpg->player->objects[2]->state) &&
        rpg->all_ennemies->en_2->loot->is_equipped == 0) {
        equipement_two_if_pressed(rpg, 0);
    }
    if (IS_PRESSED(rpg->player->objects[3]->state) &&
        rpg->all_ennemies->en_5->loot->is_equipped == 0) {
        equipement_three_if_pressed(rpg, 0);
    }
    return;
}

void if_one_equiped(sfRenderWindow *window, s_game *rpg)
{
    if (IS_PRESSED(rpg->player->objects[1]->state) &&
        rpg->all_ennemies->en_1->loot->is_equipped == 1) {
        equipement_one_if_pressed(rpg, 1);
    }
    if (IS_PRESSED(rpg->player->objects[2]->state) &&
        rpg->all_ennemies->en_2->loot->is_equipped == 1) {
        equipement_two_if_pressed(rpg, 1);
    }
    if (IS_PRESSED(rpg->player->objects[3]->state) &&
        rpg->all_ennemies->en_5->loot->is_equipped == 1) {
        equipement_three_if_pressed(rpg, 1);
    }
    return;
}
