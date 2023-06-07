/*
** EPITECH PROJECT, 2023
** draw_defeat.c
** File description:
** draw_defeat
*/

#include "function.h"

void draw_end_def(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->end.defeat.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->end.bubble_text.sprite, NULL);
    sfRenderWindow_drawText(window, rpg->end.text_def, NULL);
    return;
}
