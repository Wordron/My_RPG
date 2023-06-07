/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_game_over
*/
#include "function.h"

void interact_game_over(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeySpace
        && rpg->event.type == sfEvtKeyReleased &&
        rpg->how_death_occured == BOSS_END)
        rpg->scene_to_change = END_DEF;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->how_death_occured != BOSS_END)
        rpg->scene_to_change = MAIN_MENU;
    return;
}
