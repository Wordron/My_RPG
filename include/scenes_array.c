/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** scenes_array
*/
#include "struct_arr_to_function.h"
#include "function.h"

const s_scenes scenes[] = {
    {MAIN_MENU, draw_main_menu, interact_main_menu},
    {SPACESHIP_CHOICE, draw_spaceship_choice, interact_spaceship_choice},
    {SETTINGS, draw_setting_scene, interact_setting_scene},
    {COMMANDS, draw_commands_scene, interact_commands_scene},
    {IN_GAME_MENU, display_in_game_menu, interact_in_game_menu},
    {SPACE_MAP, draw_space, interact_space},
    {ORANGE_PLANET, draw_orange_planet, interact_orange_planet},
    {RABBIT_PLANETE, draw_rabbit_planet, interact_rabbit_planet},
    {GAME_OVER, draw_game_over, interact_game_over},
    {VICTORY, draw_victory, interact_victory},
    {INVENTORY, draw_inventory, interact_inventory},
    {FIGHT, draw_fight, interact_fight},
    {LABO, draw_labo, interact_labo},
    {THRONE, draw_throne, interact_throne},
    {END_VIC, draw_end_vic, interact_end_vic},
    {END_DEF, draw_end_def, interact_end_def},
    {LEVEL_UP, draw_level_up_menu, interact_level_up_menu},
    {PABLO_HOUSE, draw_pablo_house, interact_pablo_house},
    {TROPICAL, draw_tropical_planet, interact_tropical_planet},
    {0, 0, 0},
};
