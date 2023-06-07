/*
** EPITECH PROJECT, 2023
** init_fight_button.c
** File description:
** init all the button in the fight page
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include "stdio.h"

all_fight_button_t *init_fight_button(void)
{
    all_fight_button_t *buttons = malloc(sizeof(all_fight_button_t));

    buttons->attack_button = set_texture_button("texture/buttons/attack.png",
        (sfVector2f){400, 100}, (sfVector2f){2, 2});
    buttons->escape_button = set_texture_button
        ("texture/buttons/escape_button.png", (sfVector2f){1300, 100},
        (sfVector2f){2, 2});
    return (buttons);
}
