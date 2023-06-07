/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** display_scenes
*/
#include "struct_arr_to_function.h"
#include "function.h"

void display_scenes(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    for (int i = 0; scenes[i].scene_num != 0; i++) {
        if (rpg->scene_to_change == scenes[i].scene_num) {
            scenes[i].f_scene_display(window, view, rpg);
            return;
        }
    }
}
