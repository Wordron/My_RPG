/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** interact_end
*/

#include "function.h"

void interact_end_vic(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeySpace
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = MAIN_MENU;
    }
}
