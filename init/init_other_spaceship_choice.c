/*
** EPITECH PROJECT, 2023
** init_other_spaceship_choice.c
** File description:
** init the choise of the sapchip
*/

#include "function.h"
#include "struct_csfml.h"

static void init_text_stats_two(all_space_ship_t *all_spaceships)
{
    all_spaceships->text_gray_spaceship.attack =
        set_name_button("Attack:\t   30", (sfVector2f){430, 770}, 30, sfWhite);
    all_spaceships->text_blue_spaceship.attack =
        set_name_button("Attack:\t   20", (sfVector2f){1230, 770}, 30,
        sfWhite);
    all_spaceships->text_green_spaceship.attack =
        set_name_button("Attack:\t   20", (sfVector2f){830, 770}, 30, sfWhite);
    all_spaceships->text_gray_spaceship.defense =
        set_name_button("Defense:\t 20", (sfVector2f){430, 800}, 30, sfWhite);
    all_spaceships->text_blue_spaceship.defense =
        set_name_button("Defense:\t 20", (sfVector2f){1230, 800}, 30, sfWhite);
    all_spaceships->text_green_spaceship.defense =
        set_name_button("Defense:\t 30", (sfVector2f){830, 800}, 30, sfWhite);
}

void init_text_stats(all_space_ship_t *all_spaceships)
{
    all_spaceships->text_gray_spaceship.name =
        set_name_button("Mistigriff", (sfVector2f){480, 400}, 30, sfWhite);
    all_spaceships->text_blue_spaceship.name =
        set_name_button("Dolphine", (sfVector2f){1290, 400}, 30, sfWhite);
    all_spaceships->text_green_spaceship.name =
        set_name_button("Caterpillar", (sfVector2f){880, 400}, 30, sfWhite);
    all_spaceships->text_gray_spaceship.hp =
        set_name_button("HP:\t\t  100", (sfVector2f){430, 710}, 30, sfWhite);
    all_spaceships->text_blue_spaceship.hp =
        set_name_button("HP:\t\t  100", (sfVector2f){1230, 710}, 30, sfWhite);
    all_spaceships->text_green_spaceship.hp =
        set_name_button("HP:\t\t  100", (sfVector2f){830, 710}, 30, sfWhite);
    all_spaceships->text_gray_spaceship.speed =
        set_name_button("Speed:\t   20", (sfVector2f){430, 740}, 30, sfWhite);
    all_spaceships->text_blue_spaceship.speed =
        set_name_button("Speed:\t   30", (sfVector2f){1230, 740}, 30, sfWhite);
    all_spaceships->text_green_spaceship.speed =
        set_name_button("Speed:\t   20", (sfVector2f){830, 740}, 30, sfWhite);
    init_text_stats_two(all_spaceships);
}
