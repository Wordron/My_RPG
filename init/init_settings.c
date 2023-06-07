/*
** EPITECH PROJECT, 2023
** init_settings.c
** File description:
** init_settings
*/

#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"
#include "struct_game.h"

sfText *set_name_button(char *charname, sfVector2f pos,
    int size, sfColor color)
{
    sfFont *font = sfFont_createFromFile("texture/font/04B_03__.TTF");
    sfText *text = sfText_create();

    sfText_setString(text, charname);
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, pos);
    sfText_setFont(text, font);
    sfText_setColor(text, color);
    return (text);
}

all_text_t *init_texts(void)
{
    all_text_t *texts = malloc(sizeof(all_text_t *));

    texts->text_volume = set_name_button("SIZE WINDOW:",
        (sfVector2f){500, 390}, 30, sfWhite);
    texts->text_size_window = set_name_button("VOLUME:",
        (sfVector2f){500, 560}, 30, sfWhite);
    texts->text_commands = set_name_button(
    "ARROWS: enables you to move your ship or robot\
    \n\n\nSPACE: enables you to interact with the environnement\
    \n\n\nESCAPE: enables you to get in the in game menu\n\
    \tand to go back from any menu\n\n\
    If your ship passes in front of a planet,\n\
    then you can land on it by pressing space.",
    (sfVector2f){500, 450}, 30, sfWhite);
    texts->leveled_up = set_name_button("You leveled up !",
        (sfVector2f){848, 385}, 30, sfBlack);
    texts->youre_dumb = set_name_button("You are dumb !",
        (sfVector2f){737, 575}, 50, sfWhite);
    return (texts);
}
