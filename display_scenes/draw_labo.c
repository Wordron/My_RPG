/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_story
*/

#include "function.h"

void draw_labo(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->labo.background_labo.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->labo.bubble_text.sprite, NULL);
    sfRenderWindow_drawText(window, rpg->labo.text, NULL);
}
