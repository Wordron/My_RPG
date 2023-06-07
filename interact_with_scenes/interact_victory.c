/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_victory
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

void interact_victory(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->scene_to_change_after_fight;
}
