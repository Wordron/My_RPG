/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** destroy_struct_part_two
*/
#include "function.h"

void destroy_ennemies(all_ennemies_t *all_ennemies)
{
    free(all_ennemies->current_ennemie);
    free(all_ennemies->boss);
    free(all_ennemies->en_12);
    free(all_ennemies->en_11);
    free(all_ennemies->en_9);
    free(all_ennemies->en_8);
    free(all_ennemies->en_7);
    free(all_ennemies->en_6);
    free(all_ennemies->en_4);
    free(all_ennemies->en_3);
    free(all_ennemies->en_10->loot);
    free(all_ennemies->en_10);
    free(all_ennemies->en_5->loot);
    free(all_ennemies->en_5);
    free(all_ennemies->en_2->loot);
    free(all_ennemies->en_2);
    free(all_ennemies->en_1->loot);
    free(all_ennemies->en_1);
}

void destroy_buttons(all_button_t *all_button,
    all_fight_button_t *all_fight_buttons)
{
    free(all_button->strength_plus);
    free(all_button->speed_plus);
    free(all_button->size2_window_button);
    free(all_button->size1_window_button);
    free(all_button->settings_button);
    free(all_button->quit_button);
    free(all_button->play_button);
    free(all_button->more_button);
    free(all_button->load_button);
    free(all_button->less_button);
    free(all_button->hp_plus);
    free(all_button->escape_button);
    free(all_button->defense_plus);
    free(all_button->commands_button);
    free(all_button->attack_button);
    free(all_button);
    free(all_fight_buttons->attack_button);
    free(all_fight_buttons->escape_button);
    free(all_fight_buttons);
}

void destroy_npcs(all_npc_t *all_npcs,
    all_in_game_button_t *all_in_game_buttons)
{
    free(all_npcs->npc_1);
    free(all_npcs->npc_2);
    free(all_npcs->npc_3);
    free(all_npcs->npc_5);
    free(all_npcs->npc_7);
    free(all_npcs->traductor);
    free(all_npcs);
    free(all_in_game_buttons->characters_button);
    free(all_in_game_buttons->load_button);
    free(all_in_game_buttons->quit_button);
    free(all_in_game_buttons->resume_button);
    free(all_in_game_buttons->save_button);
    free(all_in_game_buttons->settings_button);
    free(all_in_game_buttons);
}
