/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_level_up_menu
*/
#include "function.h"

void interact_level_up_menu(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->command_last_scene;
    interact_inventory(window, view, rpg);
}
