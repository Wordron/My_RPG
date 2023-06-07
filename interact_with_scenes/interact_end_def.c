/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_end_def
*/
#include "struct_game.h"
#include "function.h"

void interact_end_def(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeySpace
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = MAIN_MENU;
}
