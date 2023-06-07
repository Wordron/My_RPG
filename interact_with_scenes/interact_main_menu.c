/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_main_menu
*/
#include "function.h"
#include <stdio.h>

static void main_menu_change_if_released_part_two(sfRenderWindow *window,
    s_game *rpg)
{
    if (IS_RELEASED(rpg->all_button->load_button->state)) {
        if (load_game(rpg, window) == 1) {
            sfRenderWindow_close(window);
            sfMusic_stop(rpg->music);
        } else {
            rpg->scene_to_change = SPACE_MAP;
            rpg->last_scene = MAIN_MENU;
            rpg->all_in_game_buttons->load_button->state = NONE;
            sfSprite_setScale(rpg->all_in_game_buttons->load_button->
                object.sprite, (sfVector2f){2.5, 2.5});
        }
    }
    if (IS_RELEASED(rpg->all_button->play_button->state)) {
        rpg->scene_to_change = LABO;
        rpg->all_button->play_button->state = NONE;
        sfSprite_setScale(rpg->all_button->play_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    }
}

static void main_menu_change_if_released(sfRenderWindow *window, s_game *rpg)
{
    if (IS_RELEASED(rpg->all_button->quit_button->state)) {
        sfRenderWindow_close(window);
        sfMusic_stop(rpg->music);
    }
    if (IS_RELEASED(rpg->all_button->settings_button->state)) {
        rpg->last_scene = MAIN_MENU;
        rpg->scene_to_change = SETTINGS;
        rpg->all_button->settings_button->state = NONE;
        sfSprite_setScale(rpg->all_button->settings_button->
            object.sprite, (sfVector2f){1.6, 1.6});
    }
    main_menu_change_if_released_part_two(window, rpg);
}

void interact_main_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    is_button_interacted(rpg->all_button->settings_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->play_button, window, &(rpg->event));
    is_button_interacted(rpg->all_button->load_button, window, &(rpg->event));
    is_button_interacted(rpg->all_button->quit_button, window, &(rpg->event));
    main_menu_change_if_hover(rpg);
    main_menu_change_if_none(rpg);
    main_menu_change_if_pressed(window, rpg);
    main_menu_change_if_released(window, rpg);
    return;
}
