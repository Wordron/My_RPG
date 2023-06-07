/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_on_load_game
*/
#include "function.h"

static void init_other_on_load_game(s_game *rpg)
{
    rpg->all_ennemies->en_7->check = 0;
    rpg->all_ennemies->en_7->dead = 0;
    rpg->all_ennemies->en_8->check = 0;
    rpg->all_ennemies->en_8->dead = 0;
    rpg->all_ennemies->en_9->check = 0;
    rpg->all_ennemies->en_9->dead = 0;
    rpg->all_ennemies->en_10->check = 0;
    rpg->all_ennemies->en_10->dead = 0;
    rpg->all_ennemies->en_11->check = 0;
    rpg->all_ennemies->en_11->dead = 0;
    rpg->all_ennemies->en_12->check = 0;
    rpg->all_ennemies->en_12->dead = 0;
    rpg->all_ennemies->boss->check = 0;
    rpg->all_ennemies->boss->dead = 0;
}

void init_on_load_game(s_game *rpg)
{
    rpg->all_ennemies->en_1->check = 0;
    rpg->all_ennemies->en_1->dead = 0;
    rpg->all_ennemies->en_2->check = 0;
    rpg->all_ennemies->en_2->dead = 0;
    rpg->all_ennemies->en_3->check = 0;
    rpg->all_ennemies->en_3->dead = 0;
    rpg->all_ennemies->en_4->check = 0;
    rpg->all_ennemies->en_4->dead = 0;
    rpg->all_ennemies->en_5->check = 0;
    rpg->all_ennemies->en_5->dead = 0;
    rpg->all_ennemies->en_6->check = 0;
    rpg->all_ennemies->en_6->dead = 0;
    rpg->is_fighted = NO_ONE_TALKING;
    init_other_on_load_game(rpg);
    sfSprite_setPosition(rpg->player->robot.sprite, (sfVector2f){100, 200});
}
