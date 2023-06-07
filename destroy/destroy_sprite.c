/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** destroy_sprite
*/

#include "function.h"

void destroy_sprite_part5(s_game *rpg)
{
    sfSprite_destroy(rpg->all_button->less_button->object.sprite);
    sfSprite_destroy(rpg->all_button->load_button->object.sprite);
    sfSprite_destroy(rpg->all_button->more_button->object.sprite);
    sfSprite_destroy(rpg->all_button->play_button->object.sprite);
    sfSprite_destroy(rpg->planet_orange.sign.sprite);
    sfSprite_destroy(rpg->planet_orange.three_d.sprite);
    sfSprite_destroy(rpg->planet_rabbit.door.sprite);
    sfSprite_destroy(rpg->planet_rabbit.sign_2.sprite);
    sfSprite_destroy(rpg->planet_rabbit.sprite);
    sfSprite_destroy(rpg->planet_rabbit.three_d_top.sprite);
    for (int i = 0; i != 5; i++) {
        sfSprite_destroy(rpg->player->objects[i]->object.sprite);
        sfTexture_destroy(rpg->player->objects[i]->object.texture);
    }
}

void destroy_sprite_part4(s_game *rpg)
{
    sfSprite_destroy(rpg->all_ennemies->en_3->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_4->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_4->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_5->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_5->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_6->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_6->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_7->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_7->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_8->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_8->sprite_character.sprite);
    sfSprite_destroy(rpg->player->inventory.sprite);
    sfSprite_destroy(rpg->player->player_stat->sprite_character.sprite);
    sfSprite_destroy(rpg->player->robot.sprite);
    sfSprite_destroy(rpg->space.letter->sprite_object.sprite);
    sfSprite_destroy(rpg->space.space_sprite);
    sfSprite_destroy(rpg->planet_orange.ground.sprite);
}

void destroy_sprite_part3(s_game *rpg)
{
    sfSprite_destroy(rpg->all_planets->small_ast->object.sprite);
    sfSprite_destroy(rpg->all_planets->white->object.sprite);
    sfSprite_destroy(rpg->all_planets->yellow->object.sprite);
    sfSprite_destroy(rpg->all_npcs->npc_1->bubble_text.sprite);
    sfSprite_destroy(rpg->all_npcs->npc_1->sprite_character.sprite);
    sfSprite_destroy(rpg->all_npcs->npc_3->sprite_character.sprite);
    sfSprite_destroy(rpg->all_npcs->npc_5->sprite_character.sprite);
    sfSprite_destroy(rpg->all_npcs->npc_7->sprite_character.sprite);
    sfSprite_destroy(rpg->all_npcs->traductor->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->boss->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->boss->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_1->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_1->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_2->bubble_text.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_2->sprite_character.sprite);
    sfSprite_destroy(rpg->all_ennemies->en_3->bubble_text.sprite);
    destroy_sprite_part4(rpg);
    destroy_sprite_part5(rpg);
}

void destroy_sprite_part2(s_game *rpg)
{
    sfSprite_destroy(rpg->all_button->quit_button->object.sprite);
    sfSprite_destroy(rpg->all_button->settings_button->object.sprite);
    sfSprite_destroy(rpg->all_button->size1_window_button->object.sprite);
    sfSprite_destroy(rpg->all_button->size2_window_button->object.sprite);
    sfSprite_destroy(rpg->all_in_game_buttons->load_button->object.sprite);
    sfSprite_destroy(rpg->all_in_game_buttons->quit_button->object.sprite);
    sfSprite_destroy(rpg->all_in_game_buttons->resume_button->object.sprite);
    sfSprite_destroy(rpg->all_in_game_buttons->save_button->object.sprite);
    sfSprite_destroy(rpg->all_in_game_buttons->settings_button->object.sprite);
    sfSprite_destroy(rpg->all_fight_buttons->attack_button->object.sprite);
    sfSprite_destroy(rpg->all_fight_buttons->escape_button->object.sprite);
    sfSprite_destroy(rpg->all_spaceships->blue_spaceship->object.sprite);
    sfSprite_destroy(rpg->all_spaceships->gray_spaceship->object.sprite);
    sfSprite_destroy(rpg->all_spaceships->green_spaceship->object.sprite);
    sfSprite_destroy(rpg->all_planets->big_ast->object.sprite);
    sfSprite_destroy(rpg->all_planets->black_hole->object.sprite);
    sfSprite_destroy(rpg->all_planets->green->object.sprite);
    sfSprite_destroy(rpg->all_planets->orange->object.sprite);
    sfSprite_destroy(rpg->all_planets->rabbit->object.sprite);
}

void destroy_sprite(s_game *rpg)
{
    sfSprite_destroy(rpg->main_menu.main_menu_sprite);
    sfSprite_destroy(rpg->menu_spaceship_choice.main_menu_sprite);
    sfSprite_destroy(rpg->fight_background);
    sfSprite_destroy(rpg->game_over.sprite);
    sfSprite_destroy(rpg->victory.sprite);
    sfSprite_destroy(rpg->end.victory.sprite);
    sfSprite_destroy(rpg->end.defeat.sprite);
    sfSprite_destroy(rpg->end.bubble_text.sprite);
    sfSprite_destroy(rpg->labo.background_labo.sprite);
    sfSprite_destroy(rpg->labo.bubble_text.sprite);
    sfSprite_destroy(rpg->throne.background_throne.sprite);
    sfSprite_destroy(rpg->all_button->attack_button->object.sprite);
    sfSprite_destroy(rpg->all_button->commands_button->object.sprite);
    sfSprite_destroy(rpg->all_button->escape_button->object.sprite);
    sfSprite_destroy(
        rpg->all_in_game_buttons->characters_button->object.sprite);
    sfSprite_destroy(
        rpg->all_ennemies->current_ennemie->sprite_character.sprite);
    destroy_sprite_part2(rpg);
    destroy_sprite_part3(rpg);
}
