/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_level_up_menu
*/
#include "function.h"

void draw_level_up_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    draw_inventory(window, view, rpg);
    sfRenderWindow_drawText(window, rpg->all_texts->leveled_up, NULL);
}
