/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** destroy_texture
*/

#include "function.h"

void destroy_texture_part4(s_game *rpg)
{
    sfTexture_destroy(rpg->all_ennemies->en_2->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_3->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_4->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_5->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_6->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_7->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_8->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_9->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_10->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_11->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->en_12->bubble_text.texture);
    sfTexture_destroy(rpg->player->inventory.texture);
}

void destroy_texture_part3(s_game *rpg)
{
    sfTexture_destroy(rpg->all_planets->green->object.texture);
    sfTexture_destroy(rpg->all_planets->orange->object.texture);
    sfTexture_destroy(rpg->all_planets->rabbit->object.texture);
    sfTexture_destroy(rpg->all_planets->small_ast->object.texture);
    sfTexture_destroy(rpg->all_planets->white->object.texture);
    sfTexture_destroy(rpg->all_planets->yellow->object.texture);
    sfTexture_destroy(rpg->all_npcs->npc_1->bubble_text.texture);
    sfTexture_destroy(rpg->all_npcs->npc_1->sprite_character.texture);
    sfTexture_destroy(rpg->all_npcs->npc_3->sprite_character.texture);
    sfTexture_destroy(rpg->all_npcs->npc_5->sprite_character.texture);
    sfTexture_destroy(rpg->all_npcs->npc_7->sprite_character.texture);
    sfTexture_destroy(rpg->all_npcs->traductor->sprite_character.texture);
    sfTexture_destroy(rpg->all_ennemies->en_1->bubble_text.texture);
}

void destroy_texture_part2(s_game *rpg)
{
    sfTexture_destroy(rpg->all_button->load_button->object.texture);
    sfTexture_destroy(rpg->all_button->more_button->object.texture);
    sfTexture_destroy(rpg->all_button->play_button->object.texture);
    sfTexture_destroy(rpg->all_button->quit_button->object.texture);
    sfTexture_destroy(rpg->all_button->settings_button->object.texture);
    sfTexture_destroy(rpg->all_button->size2_window_button->object.texture);
    sfTexture_destroy(rpg->all_in_game_buttons->quit_button->object.texture);
    sfTexture_destroy(rpg->all_in_game_buttons->resume_button->object.texture);
    sfTexture_destroy(rpg->all_fight_buttons->attack_button->object.texture);
    sfTexture_destroy(rpg->all_fight_buttons->escape_button->object.texture);
    sfTexture_destroy(rpg->all_spaceships->blue_spaceship->object.texture);
    sfTexture_destroy(rpg->all_spaceships->gray_spaceship->object.texture);
    sfTexture_destroy(rpg->all_spaceships->green_spaceship->object.texture);
    sfTexture_destroy(rpg->all_planets->big_ast->object.texture);
    sfTexture_destroy(rpg->all_planets->black_hole->object.texture);
}

void destroy_texture_part1(s_game *rpg)
{
    sfTexture_destroy(rpg->space.space_texture);
    sfTexture_destroy(rpg->space.letter->sprite_object.texture);
    sfTexture_destroy(rpg->planet_orange.ground.texture);
    sfTexture_destroy(rpg->planet_orange.sign.texture);
    sfTexture_destroy(rpg->planet_orange.three_d.texture);
    sfTexture_destroy(rpg->planet_rabbit.door.texture);
    sfTexture_destroy(rpg->planet_rabbit.sign_2.texture);
    sfTexture_destroy(rpg->planet_rabbit.texture);
    sfTexture_destroy(rpg->planet_rabbit.three_d_top.texture);
    sfTexture_destroy(rpg->all_ennemies->en_10->loot->bubble_text.texture);
    sfTexture_destroy(rpg->all_ennemies->boss->bubble_text.texture);
    sfTexture_destroy(
        rpg->all_in_game_buttons->settings_button->object.texture);
    destroy_texture_part2(rpg);
    destroy_texture_part3(rpg);
    destroy_texture_part4(rpg);
}

void destroy_texture(s_game *rpg)
{
    sfTexture_destroy(rpg->main_menu.main_menu_texture);
    sfTexture_destroy(rpg->menu_spaceship_choice.main_menu_texture);
    sfTexture_destroy(rpg->game_over.texture);
    sfTexture_destroy(rpg->victory.texture);
    sfTexture_destroy(rpg->end.victory.texture);
    sfTexture_destroy(rpg->end.defeat.texture);
    sfTexture_destroy(rpg->end.bubble_text.texture);
    sfTexture_destroy(rpg->labo.background_labo.texture);
    sfTexture_destroy(rpg->labo.bubble_text.texture);
    sfTexture_destroy(rpg->throne.background_throne.texture);
    sfTexture_destroy(rpg->all_button->attack_button->object.texture);
    sfTexture_destroy(rpg->all_button->commands_button->object.texture);
    sfTexture_destroy(rpg->all_button->escape_button->object.texture);
    sfTexture_destroy(rpg->all_button->less_button->object.texture);
    sfTexture_destroy(
        rpg->all_ennemies->current_ennemie->sprite_character.texture);
    sfTexture_destroy(
        rpg->all_in_game_buttons->characters_button->object.texture);
    destroy_texture_part1(rpg);
}
