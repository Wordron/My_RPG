/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_equipments
*/

#include "struct_game.h"
#include "function.h"

static void fill_struct_loot(all_ennemies_t *all_en)
{
    all_en->en_1->loot->add_strength = 20;
    all_en->en_2->loot->add_speed = 20;
    all_en->en_5->loot->add_defense = 20;
    all_en->en_1->loot->is_equipped = 0;
    all_en->en_2->loot->is_equipped = 0;
    all_en->en_5->loot->is_equipped = 0;
    all_en->en_1->loot->check = 0;
    all_en->en_2->loot->check = 0;
    all_en->en_5->loot->check = 0;
    all_en->en_10->loot->check = 0;
    all_en->en_1->loot->check_object = LEFT_ON_GROUND;
    all_en->en_2->loot->check_object = LEFT_ON_GROUND;
    all_en->en_5->loot->check_object = LEFT_ON_GROUND;
    all_en->en_10->loot->check_object = LEFT_ON_GROUND;
}

void init_loot_for_ennemies(all_ennemies_t *all_en)
{
    all_en->en_1->loot = set_texture_object("texture/equipments.png",
        (sfVector2f){450, 150}, (sfVector2f){1, 1},
        (sfIntRect){0, 0, 62, 70});
    all_en->en_2->loot = set_texture_object("texture/equipments.png",
        (sfVector2f){1600, 860}, (sfVector2f){1, 1},
        (sfIntRect){0, 70, 62, 70});
    all_en->en_5->loot = set_texture_object("texture/equipments.png",
        (sfVector2f){1700, 70}, (sfVector2f){1, 1},
        (sfIntRect){0, 140, 62, 70});
    all_en->en_10->loot = set_texture_object("texture/letter.png",
        (sfVector2f){1100, 950}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 100, 110});
    all_en->en_10->loot->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_en->en_10->loot->text = set_name_button("Ah, a map! It is different\
\nfrom the one in my database.\nLooks like a hidden planet is\
\npresent in the southeast.\nI should go see Pablo !",
    (sfVector2f){170, 850}, 30, sfBlack);
    fill_struct_loot(all_en);
}
