/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_spaceship_choice
*/
#include "function.h"

static void if_button_hover(s_game *rpg)
{
    if (IS_HOVER(rpg->all_spaceships->green_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_2,
            sfBlue);
    if (IS_HOVER(rpg->all_spaceships->gray_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_1,
            sfBlue);
    if (IS_HOVER(rpg->all_spaceships->blue_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_3,
            sfBlue);
}

void if_button_none(s_game *rpg)
{
    if (IS_NONE(rpg->all_spaceships->green_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_2,
            sfCyan);
    if (IS_NONE(rpg->all_spaceships->gray_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_1,
            sfCyan);
    if (IS_NONE(rpg->all_spaceships->blue_spaceship->state))
        sfRectangleShape_setOutlineColor(rpg->all_spaceships->spaceship_3,
            sfCyan);
}

void interact_spaceship_choice(sfRenderWindow *window, sfView *view,
    s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = MAIN_MENU;
    is_button_interacted(rpg->all_spaceships->gray_spaceship, window,
        &(rpg->event));
    is_button_interacted(rpg->all_spaceships->blue_spaceship, window,
        &(rpg->event));
    is_button_interacted(rpg->all_spaceships->green_spaceship, window,
        &(rpg->event));
    choose_gray_space_ship(rpg);
    choose_green_space_ship(rpg);
    choose_blue_space_ship(rpg);
    if_button_none(rpg);
    if_button_hover(rpg);
    return;
}
