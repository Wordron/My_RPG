/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_struct
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

static void init_backgrounds_planet(s_game *rpg)
{
    init_planet_orange(&rpg->planet_orange,
        "texture/background/orange_map.jpg", (sfVector2f){2.8, 2.5});
    init_planet_rabbit(&rpg->planet_rabbit,
        "texture/background/ground_map_rabbit.jpg", (sfVector2f){2.8, 2.5});
    init_planet_tropical(&rpg->tropical,
        "texture/background/tropical_ground.png", (sfVector2f){2.8, 2.5});
}

static void init_background(s_game *rpg)
{
    init_menu_spaceship_choice(&rpg->menu_spaceship_choice,
        "texture/background/main_menu_without_text.jpg",
        (sfIntRect){55, 65, 2100, 1400}, (sfVector2f){1.5, 1.5});
    init_space(&rpg->space, "texture/background/space.jpg",
        (sfVector2f){1, 1});
    init_main_menu(&rpg->main_menu,
        "texture/background/main_menu_gray_title.jpg",
        (sfIntRect){85, 100, 2100, 1400}, (sfVector2f){1, 1});
    init_backgrounds_planet(rpg);
    init_labo(rpg, "texture/background/labo.jpg", (sfVector2f){2, 2});
    init_throne(rpg, "texture/background/throne.jpg", (sfVector2f){3.8, 2});
    init_end_defeat(rpg);
    init_end_victory(rpg);
    init_game_over(rpg);
    init_victory(rpg);
    init_pablo_house(rpg);
    return;
}

static void init_all(s_game *rpg)
{
    rpg->all_button = init_buttons();
    rpg->all_planets = init_planets();
    rpg->all_npcs = init_npc(rpg);
    rpg->all_ennemies = init_ennemies();
    rpg->all_spaceships = initialise_spaceship();
    rpg->all_texts = init_texts();
}

static void init_clock_music(s_game *rpg)
{
    rpg->music = sfMusic_createFromFile(
        "texture/music/space_ambience.ogg");
    sfMusic_setVolume(rpg->music, 50);
    sfMusic_play(rpg->music);
    sfMusic_setLoop(rpg->music, true);
    rpg->win_clock = sfClock_create();
    rpg->player_clock = sfClock_create();
    rpg->escape_clock = sfClock_create();
    rpg->time_planets.clock = sfClock_create();
    rpg->time_fight.clock = sfClock_create();
}

void init_struct(s_game *rpg)
{
    rpg->scene_to_change = MAIN_MENU;
    rpg->is_talking = NO_ONE_TALKING;
    rpg->all_in_game_buttons = init_all_in_game_button();
    rpg->particules = set_texture("texture/enemy/particles.png",
        (sfVector2f){1450, 620}, (sfVector2f){5, 5},
        (sfIntRect){0, 0, 70, 90});
    rpg->controls = init_controls();
    rpg->player = init_player();
    init_clock_music(rpg);
    init_background(rpg);
    init_all(rpg);
    init_inventory(rpg, "texture/inventory.png", (sfVector2f){2.5, 2.5},
        (sfVector2f){470, 50});
    rpg->all_fight_buttons = init_fight_button();
    rpg->fight_background = create_fight_background();
    rpg->check_fight = 0;
    rpg->count = 0;
    return;
}
