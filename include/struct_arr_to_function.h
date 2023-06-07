/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** struct_arr_to_function
*/
#include "struct_game.h"

#ifndef MACRO_H_
    #define MACRO_H_

    typedef struct scenes_t {
        enum e_scenes scene_num;
        void (*f_scene_display)(sfRenderWindow *, sfView *, s_game *);
        void (*f_scene_event)(sfRenderWindow *, sfView *, s_game *);
    } s_scenes;

    extern const s_scenes scenes[];

#endif /* !MACRO_H_ */
