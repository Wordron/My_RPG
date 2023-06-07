/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** destroy_structure
*/
#include "function.h"

static void destroy_single_planet(planet_t *planet)
{
    for (int i = 0; planet->map_collision[i] != NULL; i++)
        free(planet->map_collision[i]);
    free(planet->map_collision);
    free(planet);
}

void destroy_planets(all_planet_t *all_planet)
{
    free(all_planet->big_ast);
    free(all_planet->yellow);
    free(all_planet->white);
    free(all_planet->small_ast);
    free(all_planet->black_hole);
    destroy_single_planet(all_planet->rabbit);
    destroy_single_planet(all_planet->orange);
    destroy_single_planet(all_planet->green);
    free(all_planet);
}

void destroy_player(s_player *player, all_space_ship_t *all_space_ship)
{
    for (int i = 0; i != 16; i++)
        free(player->objects[i]);
    free(player->objects);
    free(player->player_stat);
    free(player);
    free(all_space_ship->blue_spaceship);
    free(all_space_ship->green_spaceship);
    free(all_space_ship->gray_spaceship);
    sfRectangleShape_destroy(all_space_ship->spaceship_1);
    sfRectangleShape_destroy(all_space_ship->spaceship_2);
    sfRectangleShape_destroy(all_space_ship->spaceship_3);
    free(all_space_ship);
}

void destroy_structure(s_game *rpg)
{
    destroy_buttons(rpg->all_button, rpg->all_fight_buttons);
    destroy_ennemies(rpg->all_ennemies);
    destroy_npcs(rpg->all_npcs, rpg->all_in_game_buttons);
    destroy_planets(rpg->all_planets);
    free(rpg->controls);
    for (int i = 0; rpg->pablo_house->map_collision[i] != NULL; i++)
        free(rpg->pablo_house->map_collision[i]);
    free(rpg->pablo_house->map_collision);
    free(rpg->pablo_house);
    sfRectangleShape_destroy(rpg->planet_orange.door);
    destroy_player(rpg->player, rpg->all_spaceships);
    free(rpg->space.letter);
    free(rpg->space.papers);
    free(rpg);
}
