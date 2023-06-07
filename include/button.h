/*
** EPITECH PROJECT, 2023
** button.h
** File description:
** boutton
*/
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Window/Event.h>
#include "struct_csfml.h"

#ifndef BOUTTON_H_
    #define BOUTTON_H_

    enum e_gui_state {
        NONE = 0,
        HOVER,
        PRESSED,
        RELEASED
    };

    typedef struct button_s {
        enum e_gui_state state;
        s_sprite_struct object;
    } t_button;

    #define IS_NONE(a) (a == NONE)
    #define IS_HOVER(a) (a == HOVER)
    #define IS_PRESSED(a) (a == PRESSED)
    #define IS_RELEASED(a) (a == RELEASED)

#endif /* !BOUTTON_H_ */
