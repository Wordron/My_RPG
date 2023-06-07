/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** settings_button_interaction
*/
#include "function.h"
#include "button.h"

void settings_change_if_none(s_game *rpg)
{
    if (IS_NONE(rpg->all_button->commands_button->state))
        sfSprite_setScale(rpg->all_button->commands_button->object.sprite,
            (sfVector2f){1.5, 1.5});
    if (IS_NONE(rpg->all_button->size2_window_button->state))
        sfSprite_setScale(rpg->all_button->size2_window_button->object.sprite,
            (sfVector2f){1.5, 1.5});
    if (IS_NONE(rpg->all_button->more_button->state))
        sfSprite_setScale(rpg->all_button->more_button->object.sprite,
            (sfVector2f){1.5, 1.5});
    if (IS_NONE(rpg->all_button->less_button->state))
        sfSprite_setScale(rpg->all_button->less_button->object.sprite,
            (sfVector2f){1.5, 1.5});
    return;
}

void settings_change_if_hover(s_game *rpg)
{
    if (IS_HOVER(rpg->all_button->commands_button->state))
        sfSprite_setScale(rpg->all_button->commands_button->object.sprite,
            (sfVector2f){1.8, 1.8});
    if (IS_HOVER(rpg->all_button->size2_window_button->state))
        sfSprite_setScale(rpg->all_button->size2_window_button->object.sprite,
            (sfVector2f){1.8, 1.8});
    if (IS_HOVER(rpg->all_button->more_button->state))
        sfSprite_setScale(rpg->all_button->more_button->object.sprite,
            (sfVector2f){1.8, 1.8});
    if (IS_HOVER(rpg->all_button->less_button->state))
        sfSprite_setScale(rpg->all_button->less_button->object.sprite,
            (sfVector2f){1.8, 1.8});
    return;
}

static void change_if_pressed_part_two(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_button->less_button->state)) {
        if (sfMusic_getVolume(rpg->music) != 0)
            sfMusic_setVolume(rpg->music, sfMusic_getVolume(rpg->music) - 10);
        sfSprite_setScale(rpg->all_button->less_button->object.sprite,
            (sfVector2f){1.6, 1.6});
        rpg->all_button->less_button->state = HOVER;
    }
    if (IS_PRESSED(rpg->all_button->size2_window_button->state)) {
        rpg->all_button->size2_window_button->state = HOVER;
    if (IS_NONE(rpg->all_button->size2_window_button->state))
        sfSprite_setScale(rpg->all_button->size2_window_button->object.sprite,
            (sfVector2f){1.5, 1.5});
    }
}

void settings_change_if_pressed(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_button->commands_button->state)) {
        rpg->scene_to_change = COMMANDS;
        rpg->command_last_scene = SETTINGS;
        rpg->all_button->commands_button->state = HOVER;
        sfSprite_setScale(rpg->all_button->commands_button->object.sprite,
            (sfVector2f){1.6, 1.6});
    }
    if (IS_PRESSED(rpg->all_button->more_button->state)) {
        if (sfMusic_getVolume(rpg->music) != 100)
            sfMusic_setVolume(rpg->music, sfMusic_getVolume(rpg->music) + 10);
        sfSprite_setScale(rpg->all_button->more_button->object.sprite,
            (sfVector2f){1.6, 1.6});
        rpg->all_button->more_button->state = HOVER;
    }
    change_if_pressed_part_two(rpg);
    return;
}
