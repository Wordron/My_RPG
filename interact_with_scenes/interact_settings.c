/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_settings
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

void interact_commands_scene(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if ((rpg->event.key.code == sfKeyEscape ||
        rpg->event.key.code == sfKeySpace)
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->command_last_scene;
}

void interact_setting_scene(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->last_scene;
    rpg->all_button->size1_window_button->state = NONE;
    is_button_interacted(rpg->all_button->size2_window_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->more_button, window, &(rpg->event));
    is_button_interacted(rpg->all_button->less_button, window, &(rpg->event));
    is_button_interacted(rpg->all_button->commands_button, window,
        &(rpg->event));
    settings_change_if_hover(rpg);
    settings_change_if_none(rpg);
    settings_change_if_pressed(rpg);
    return;
}
