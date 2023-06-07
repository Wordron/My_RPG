/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_main_menu
*/
#include "function.h"

void draw_buttons(sfRenderWindow *window, all_button_t *all_buttons)
{
    sfRenderWindow_drawSprite(window,
        all_buttons->load_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_buttons->play_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_buttons->settings_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_buttons->quit_button->object.sprite, NULL);
}

void draw_main_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->main_menu.main_menu_sprite, NULL);
    draw_buttons(window, rpg->all_button);
    return;
}
