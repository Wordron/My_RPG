/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** in_game_menu_button_interaction
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include <stdio.h>

static void in_game_menu_change_if_pressed_part2(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_in_game_buttons->characters_button->state)) {
        rpg->scene_to_change = INVENTORY;
        rpg->command_last_scene = IN_GAME_MENU;
        rpg->all_in_game_buttons->characters_button->state = NONE;
        sfSprite_setScale(rpg->all_in_game_buttons->characters_button->
            object.sprite, (sfVector2f){1.5, 1.5});
    }
    if (IS_PRESSED(rpg->all_in_game_buttons->save_button->state)) {
        save_the_party(rpg);
        rpg->all_in_game_buttons->save_button->state = NONE;
        sfSprite_setScale(rpg->all_in_game_buttons->save_button->
            object.sprite, (sfVector2f){2, 2});
    }
    if (IS_PRESSED(rpg->all_in_game_buttons->resume_button->state)) {
        rpg->scene_to_change = rpg->space_last_scene;
        rpg->all_in_game_buttons->resume_button->state = NONE;
        sfSprite_setScale(rpg->all_in_game_buttons->resume_button->
            object.sprite, (sfVector2f){2, 2});
    }
}

void in_game_menu_change_if_hover(s_game *rpg)
{
    if (rpg->all_in_game_buttons->resume_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->resume_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    if (rpg->all_in_game_buttons->characters_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->characters_button->
            object.sprite, (sfVector2f){2, 2});
    if (rpg->all_in_game_buttons->load_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->load_button->
            object.sprite, (sfVector2f){3, 3});
    if (rpg->all_in_game_buttons->quit_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->quit_button->
            object.sprite, (sfVector2f){2.8, 2.8});
    if (rpg->all_in_game_buttons->save_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->save_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    if (rpg->all_in_game_buttons->settings_button->state == HOVER)
        sfSprite_setScale(rpg->all_in_game_buttons->settings_button->
            object.sprite, (sfVector2f){2, 2});
    in_game_menu_change_if_pressed_part2(rpg);
}

void in_game_menu_change_if_none(s_game *rpg)
{
    if (rpg->all_in_game_buttons->resume_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->resume_button->
            object.sprite, (sfVector2f){2, 2});
    if (rpg->all_in_game_buttons->characters_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->characters_button->
            object.sprite, (sfVector2f){1.5, 1.5});
    if (rpg->all_in_game_buttons->load_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->load_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    if (rpg->all_in_game_buttons->quit_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->quit_button->
            object.sprite, (sfVector2f){2.3, 2.3});
    if (rpg->all_in_game_buttons->save_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->save_button->
            object.sprite, (sfVector2f){2, 2});
    if (rpg->all_in_game_buttons->settings_button->state == NONE)
        sfSprite_setScale(rpg->all_in_game_buttons->settings_button->
            object.sprite, (sfVector2f){1.6, 1.6});
}

void in_game_menu_change_if_load_pressed(s_game *rpg, sfRenderWindow *window)
{
    if (IS_PRESSED(rpg->all_in_game_buttons->load_button->state)) {
        if (load_game(rpg, window) == 1) {
            sfRenderWindow_close(window);
            sfMusic_stop(rpg->music);
        } else {
            rpg->scene_to_change = SPACE_MAP;
            rpg->last_scene = IN_GAME_MENU;
            rpg->all_in_game_buttons->load_button->state = NONE;
            sfSprite_setScale(rpg->all_in_game_buttons->load_button->
                object.sprite, (sfVector2f){2, 2});
        }
    }
}

void in_game_menu_change_if_pressed(s_game *rpg, sfRenderWindow *window)
{
    if (IS_PRESSED(rpg->all_in_game_buttons->quit_button->state)) {
        sfSprite_setScale(rpg->all_in_game_buttons->quit_button->
            object.sprite, (sfVector2f){2.3, 2.3});
        rpg->all_in_game_buttons->quit_button->state = NONE;
    }
    if (IS_PRESSED(rpg->all_in_game_buttons->settings_button->state)) {
        rpg->scene_to_change = SETTINGS;
        rpg->last_scene = IN_GAME_MENU;
        rpg->all_in_game_buttons->settings_button->state = NONE;
        sfSprite_setScale(rpg->all_in_game_buttons->settings_button->
            object.sprite, (sfVector2f){1.6, 1.6});
    }
    in_game_menu_change_if_load_pressed(rpg, window);
}
