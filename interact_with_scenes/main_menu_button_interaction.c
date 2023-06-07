/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** main_menu_button_interaction
*/
#include "function.h"
#include <stdio.h>

void main_menu_change_if_hover(s_game *rpg)
{
    if (rpg->all_button->play_button->state == HOVER) {
        sfSprite_setScale(rpg->all_button->play_button->
            object.sprite, (sfVector2f){3, 3});
    }
    if (rpg->all_button->load_button->state == HOVER) {
        sfSprite_setScale(rpg->all_button->load_button->
            object.sprite, (sfVector2f){3, 3});
    }
    if (rpg->all_button->settings_button->state == HOVER) {
        sfSprite_setScale(rpg->all_button->settings_button->
            object.sprite, (sfVector2f){2, 2});
    }
    if (rpg->all_button->quit_button->state == HOVER) {
        sfSprite_setScale(rpg->all_button->quit_button->
            object.sprite, (sfVector2f){3, 3});
    }
}

void main_menu_change_if_pressed(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_button->settings_button->state == PRESSED) {
        rpg->all_button->settings_button->state = NONE;
        sfSprite_setScale(rpg->all_button->settings_button->
            object.sprite, (sfVector2f){1.6, 1.6});
    }
    if (rpg->all_button->quit_button->state == PRESSED)
        sfSprite_setScale(rpg->all_button->quit_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    if (rpg->all_button->play_button->state == PRESSED) {
        rpg->all_button->play_button->state = HOVER;
        sfSprite_setScale(rpg->all_button->play_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
    if (rpg->all_button->load_button->state == PRESSED) {
        rpg->all_button->load_button->state = NONE;
        sfSprite_setScale(rpg->all_button->load_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
}

void main_menu_change_if_none(s_game *rpg)
{
    if (rpg->all_button->play_button->state == NONE) {
        sfSprite_setScale(rpg->all_button->play_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
    if (rpg->all_button->load_button->state == NONE) {
        sfSprite_setScale(rpg->all_button->load_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
    if (rpg->all_button->settings_button->state == NONE) {
        sfSprite_setScale(rpg->all_button->settings_button->
            object.sprite, (sfVector2f){1.6, 1.6});
    }
    if (rpg->all_button->quit_button->state == NONE) {
        sfSprite_setScale(rpg->all_button->quit_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
}
