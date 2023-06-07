/*
** EPITECH PROJECT, 2023
** in_game_menu.c
** File description:
** the menu in the game
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

void display_in_game_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->menu_spaceship_choice.main_menu_sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->load_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->settings_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->save_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->quit_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->characters_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_in_game_buttons->resume_button->object.sprite, NULL);
}
