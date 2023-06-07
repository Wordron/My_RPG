/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_game_over
*/
#include "function.h"

#include <stdio.h>

void draw_game_over(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->game_over.sprite, NULL);

    if (rpg->how_death_occured == BLACK_HOLE)
        sfRenderWindow_drawText(window, rpg->all_texts->youre_dumb, NULL);
    return;
}
