/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_end
*/

#include "function.h"

void draw_end_vic(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->end.victory.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->end.bubble_text.sprite, NULL);
    sfRenderWindow_drawText(window, rpg->end.text_vic, NULL);
    return;
}
