/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_in_game_menu
*/
#include <stdio.h>
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

all_in_game_button_t *init_all_in_game_button(void)
{
    all_in_game_button_t *buttons = malloc(sizeof(all_in_game_button_t));

    buttons->resume_button = set_texture_button("texture/buttons/resume.png",
        (sfVector2f){700, 370}, (sfVector2f){2, 2});
    buttons->save_button = set_texture_button("texture/buttons/save.png",
        (sfVector2f){700, 535}, (sfVector2f){2, 2});
    buttons->settings_button = set_texture_button(
        "texture/buttons/settings_button.png", (sfVector2f){700, 700},
        (sfVector2f){1.6, 1.6});
    buttons->characters_button = set_texture_button(
        "texture/buttons/character.png", (sfVector2f){1090, 375},
        (sfVector2f){1.5, 1.5});
    buttons->load_button =
    set_texture_button("texture/buttons/load_button.png",
    (sfVector2f){1090, 530}, (sfVector2f){2.5, 2.5});
    buttons->quit_button =
        set_texture_button("texture/buttons/quit_button.png",
        (sfVector2f){1100, 705}, (sfVector2f){2.3, 2.3});
    return (buttons);
}
