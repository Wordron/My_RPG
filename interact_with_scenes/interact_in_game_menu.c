/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_in_game_menu
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

static void update_buttons_state(sfRenderWindow *window, s_game *rpg)
{
    is_button_interacted(rpg->all_in_game_buttons->quit_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_in_game_buttons->load_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_in_game_buttons->settings_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_in_game_buttons->characters_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_in_game_buttons->save_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_in_game_buttons->resume_button, window,
        &(rpg->event));
}

void interact_in_game_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->space_last_scene;
    update_buttons_state(window, rpg);
    in_game_menu_change_if_pressed(rpg, window);
    in_game_menu_change_if_none(rpg);
    in_game_menu_change_if_hover(rpg);
    if (IS_RELEASED(rpg->all_in_game_buttons->quit_button->state)) {
        rpg->scene_to_change = MAIN_MENU;
        rpg->all_in_game_buttons->quit_button->state = NONE;
    }
    return;
}
