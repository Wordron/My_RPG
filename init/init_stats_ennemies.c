/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_stats
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"

void set_stats_ennemy_blue(s_character *ennemy)
{
    ennemy->max_hp = 60;
    ennemy->hp = 60;
    ennemy->strength = 20;
    ennemy->defense = 10;
    ennemy->speed = 10;
}

void set_stats_ennemy_red(s_character *ennemy)
{
    ennemy->max_hp = 150;
    ennemy->hp = 150;
    ennemy->strength = 30;
    ennemy->defense = 20;
    ennemy->speed = 10;
}

void set_stats_boos(s_character *boss)
{
    boss->max_hp = 1000;
    boss->hp = 1000;
    boss->strength = 80;
    boss->defense = 40;
    boss->speed = 20;
}

void set_check(all_ennemies_t *all_ennemies)
{
    all_ennemies->en_1->check = 0;
    all_ennemies->en_2->check = 0;
    all_ennemies->en_3->check = 0;
    all_ennemies->en_4->check = 0;
    all_ennemies->en_5->check = 0;
    all_ennemies->en_6->check = 0;
    all_ennemies->en_7->check = 0;
    all_ennemies->en_8->check = 0;
    all_ennemies->en_9->check = 0;
    all_ennemies->en_10->check = 0;
    all_ennemies->en_11->check = 0;
    all_ennemies->en_12->check = 0;
    all_ennemies->boss->check = 0;
}

all_ennemies_t *init_stats_ennemies(all_ennemies_t *all_ennemies)
{
    set_check(all_ennemies);
    set_stats_ennemy_blue(all_ennemies->en_1);
    set_stats_ennemy_blue(all_ennemies->en_2);
    set_stats_ennemy_blue(all_ennemies->en_3);
    set_stats_ennemy_blue(all_ennemies->en_4);
    set_stats_ennemy_red(all_ennemies->en_5);
    set_stats_ennemy_red(all_ennemies->en_6);
    set_stats_ennemy_red(all_ennemies->en_7);
    set_stats_ennemy_red(all_ennemies->en_8);
    set_stats_ennemy_blue(all_ennemies->en_9);
    set_stats_ennemy_blue(all_ennemies->en_11);
    set_stats_ennemy_blue(all_ennemies->en_12);
    set_stats_ennemy_red(all_ennemies->en_10);
    set_stats_boos(all_ennemies->boss);
    return (all_ennemies);
}
