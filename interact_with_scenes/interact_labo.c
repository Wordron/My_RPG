/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** interact_labo
*/

#include "function.h"

void interact_labo(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeySpace
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = SPACESHIP_CHOICE;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
}
