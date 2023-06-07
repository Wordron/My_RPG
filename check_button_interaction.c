/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** check_button_interaction
*/
#include <SFML/Graphics.h>
#include "button.h"

static sfBool is_mouse_hover(t_button *button, sfRenderWindow *window)
{
    sfFloatRect rec = sfSprite_getGlobalBounds(button->object.sprite);

    if (sfFloatRect_contains(&rec, sfMouse_getPositionRenderWindow(window).x,
        sfMouse_getPositionRenderWindow(window).y)) {
        button->state = HOVER;
        return (sfTrue);
    } else {
        button->state = NONE;
        return (sfFalse);
    }
}

void is_button_interacted(t_button *button, sfRenderWindow *window,
    sfEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed
        && is_mouse_hover(button, window))
        button->state = PRESSED;
    else {
        if (!IS_PRESSED(button->state) && !IS_RELEASED(button->state)
            && is_mouse_hover(button, window))
            button->state = HOVER;
        if (IS_NONE(button->state) || IS_RELEASED(button->state))
            button->state = NONE;
    }
    if (event->type == sfEvtMouseButtonReleased
        && is_mouse_hover(button, window))
        button->state = RELEASED;
}
