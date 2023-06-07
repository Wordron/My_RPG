/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_spaceship_choice
*/
#include "function.h"
#include "struct_csfml.h"

void display_spaceships(sfRenderWindow *window,
    all_space_ship_t *all_spaceships)
{
    sfRenderWindow_drawRectangleShape(window,
        all_spaceships->spaceship_1, NULL);
    sfRenderWindow_drawRectangleShape(window,
        all_spaceships->spaceship_2, NULL);
    sfRenderWindow_drawRectangleShape(window,
        all_spaceships->spaceship_3, NULL);
    sfRenderWindow_drawSprite(window,
        all_spaceships->gray_spaceship->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_spaceships->green_spaceship->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_spaceships->blue_spaceship->object.sprite, NULL);
    sfRenderWindow_drawText(window, all_spaceships->text_gray_spaceship.name,
        NULL);
    sfRenderWindow_drawText(window, all_spaceships->text_blue_spaceship.name,
        NULL);
    sfRenderWindow_drawText(window, all_spaceships->text_green_spaceship.name,
        NULL);
    return;
}

void do_interactions(sfRenderWindow *window, s_game *rpg)
{
    if (IS_HOVER(rpg->all_spaceships->gray_spaceship->state)) {
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_gray_spaceship.hp, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_gray_spaceship.speed, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_gray_spaceship.attack, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_gray_spaceship.defense, NULL);
    }
    if (IS_HOVER(rpg->all_spaceships->blue_spaceship->state)) {
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_blue_spaceship.hp, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_blue_spaceship.speed, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_blue_spaceship.attack, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_blue_spaceship.defense, NULL);
    }
}

void do_interactions_two(sfRenderWindow *window, s_game *rpg)
{
    if (IS_HOVER(rpg->all_spaceships->green_spaceship->state)) {
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_green_spaceship.hp, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_green_spaceship.speed, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_green_spaceship.attack, NULL);
        sfRenderWindow_drawText(window,
            rpg->all_spaceships->text_green_spaceship.defense, NULL);
    }
}

void draw_spaceship_choice(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->menu_spaceship_choice.main_menu_sprite, NULL);
    display_spaceships(window, rpg->all_spaceships);
    do_interactions(window, rpg);
    do_interactions_two(window, rpg);
    if (IS_PRESSED(rpg->all_spaceships->gray_spaceship->state)) {
        rpg->scene_to_change = SPACE_MAP;
        rpg->all_spaceships->gray_spaceship->state = NONE;
    }
    if (IS_PRESSED(rpg->all_spaceships->blue_spaceship->state)) {
        rpg->scene_to_change = SPACE_MAP;
        rpg->all_spaceships->blue_spaceship->state = NONE;
    }
    if (IS_PRESSED(rpg->all_spaceships->green_spaceship->state)) {
        rpg->scene_to_change = SPACE_MAP;
        rpg->all_spaceships->green_spaceship->state = NONE;
    }
    return;
}
