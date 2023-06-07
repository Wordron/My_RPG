/*
** EPITECH PROJECT, 2023
** draw_victory.c
** File description:
** draw the victory texture
*/
#include <stdio.h>
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

void draw_victory(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->victory.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->win_clock).microseconds > 999999)
        rpg->scene_to_change = rpg->scene_to_change_after_fight;
}
