/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** destroy_text
*/

#include "function.h"

void destroy_text_part2(s_game *rpg)
{
    sfText_destroy(rpg->all_npcs->traductor->text3);
    sfText_destroy(rpg->all_ennemies->en_1->text);
    sfText_destroy(rpg->all_ennemies->en_2->text);
    sfText_destroy(rpg->all_ennemies->en_3->text);
    sfText_destroy(rpg->all_ennemies->en_4->text);
    sfText_destroy(rpg->all_ennemies->en_5->text);
    sfText_destroy(rpg->all_ennemies->en_6->text);
    sfText_destroy(rpg->all_ennemies->en_7->text);
    sfText_destroy(rpg->all_ennemies->en_8->text);
    sfText_destroy(rpg->all_ennemies->boss->text);
    sfText_destroy(rpg->all_ennemies->boss->text2);
    sfText_destroy(rpg->all_ennemies->boss->text3);
    sfText_destroy(rpg->all_ennemies->boss->text4);
    sfText_destroy(rpg->all_ennemies->boss->text5);
    sfText_destroy(rpg->all_ennemies->boss->text6);
    sfText_destroy(rpg->all_ennemies->boss->text7);
    sfText_destroy(rpg->all_ennemies->boss->text8);
    sfText_destroy(rpg->all_ennemies->en_10->loot->text);
    sfText_destroy(rpg->space.letter->text);
    sfText_destroy(rpg->end.text_def);
}

void destroy_text(s_game *rpg)
{
    sfText_destroy(rpg->end.text_vic);
    sfText_destroy(rpg->labo.text);
    sfText_destroy(rpg->all_texts->text_commands);
    sfText_destroy(rpg->all_texts->text_size_window);
    sfText_destroy(rpg->all_texts->text_volume);
    sfText_destroy(rpg->player->text_attack);
    sfText_destroy(rpg->player->text_defense);
    sfText_destroy(rpg->player->text_hp);
    sfText_destroy(rpg->player->text_spare_points);
    sfText_destroy(rpg->all_texts->leveled_up);
    sfText_destroy(rpg->all_npcs->npc_1->text);
    sfText_destroy(rpg->all_npcs->npc_3->text);
    sfText_destroy(rpg->all_npcs->npc_5->text);
    sfText_destroy(rpg->all_npcs->npc_7->text);
    sfText_destroy(rpg->all_npcs->traductor->text);
    sfText_destroy(rpg->all_npcs->traductor->text2);
    destroy_text_part2(rpg);
}
