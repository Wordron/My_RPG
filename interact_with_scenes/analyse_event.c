/*
** EPITECH PROJECT, 2023
** analyse_event.c
** File description:
** analyse all events in the  window
*/
#include "function.h"
#include "struct_game.h"
#include "struct_arr_to_function.h"
#include <stdio.h>

void check_which_key_pressed(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->event.key.code == rpg->controls->move_left)
        rpg->key_pressed = rpg->controls->move_left;
    if (rpg->event.key.code == rpg->controls->move_right)
        rpg->key_pressed = rpg->controls->move_right;
    if (rpg->event.key.code == rpg->controls->move_down)
        rpg->key_pressed = rpg->controls->move_down;
    if (rpg->event.key.code == rpg->controls->move_up)
        rpg->key_pressed = rpg->controls->move_up;
    if (rpg->event.key.code == rpg->controls->menu)
        rpg->key_pressed = rpg->controls->menu;
    if (rpg->event.key.code == rpg->controls->interact)
        rpg->key_pressed = rpg->controls->interact;
}

void analyse_events(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.type == sfEvtKeyPressed)
        check_which_key_pressed(window, rpg);
    if (rpg->event.type == sfEvtKeyReleased)
        rpg->key_pressed = -2;
    if (rpg->event.type == sfEvtClosed) {
        sfMusic_stop(rpg->music);
        sfRenderWindow_close(window);
    }
    for (int i = 0; scenes[i].scene_num != 0; i++) {
        if (rpg->scene_to_change == scenes[i].scene_num) {
            scenes[i].f_scene_event(window, view, rpg);
            return;
        }
    }
}
