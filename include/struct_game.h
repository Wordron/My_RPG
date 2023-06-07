/*
** EPITECH PROJECT, 2023
** struct.h
** File description:
** struct
*/
#include "struct_csfml.h"
#include "button.h"
#include "stdbool.h"

#ifndef STRUCT_GAME_H_
    #define STRUCT_GAME_H_

    enum e_scenes {
        MAIN_MENU = 1,
        SPACESHIP_CHOICE,
        SETTINGS,
        COMMANDS,
        IN_GAME_MENU,
        SPACE_MAP,
        COMBAT_SCENE,
        ORANGE_PLANET,
        PABLO_HOUSE,
        RABBIT_PLANETE,
        TROPICAL,
        PLANETE_THREE,
        PLANETE_FOUR,
        INVENTORY,
        FIGHT,
        GAME_OVER,
        VICTORY,
        LABO,
        THRONE,
        END_VIC,
        END_DEF,
        LEVEL_UP
    };

    enum e_is_picked_up {
        LEFT_ON_GROUND = 0,
        PICKED_UP
    };

    enum e_character_talking {
        NO_ONE_TALKING = 0,
        TRANSLATOR,
        NPC_1,
        NPC_2,
        NPC_3,
        NPC_4,
        NPC_5,
        NPC_6,
        NPC_7,
        NPC_8,
        EN_1,
        EN_2,
        EN_3,
        EN_4,
        EN_5,
        EN_6,
        EN_7,
        EN_8,
        EN_9,
        EN_10,
        EN_11,
        EN_12,
        BOSS,
        DOG
    };

    enum e_fight_outcome {
        NO_FIGHT,
        DEATH,
        VICTORIOUS,
        ESCAPE
    };

    enum e_how_dead {
        BOSS_END,
        BLACK_HOLE,
        RANDOM_ENNEMI
    };

    typedef struct controls_t {
        int move_left;
        int move_up;
        int move_right;
        int move_down;
        int interact;
        int menu;
    } s_controls;

    // Structure for the different objects
    typedef struct object_t {
        enum e_is_picked_up check_object;
        s_sprite_struct sprite_object;
        s_sprite_struct bubble_text;
        int add_max_hp;
        int add_strength;
        int add_defense;
        int add_speed;
        sfText *text;
        int check;
        int is_equipped;
    } s_object;

    // Base structure for characters
    typedef struct character_t {
        s_sprite_struct sprite_character;
        s_sprite_struct bubble_text;
        s_object *loot;
        int hp;
        int max_hp;
        int strength;
        int defense;
        int speed;
        sfText *text;
        sfText *text2;
        sfText *text3;
        sfText *text4;
        sfText *text5;
        sfText *text6;
        sfText *text7;
        sfText *text8;
        sfText *fight_hp;
        sfText *fight_max_hp;
        sfText *fight_slash;
        int check;
        int dead;
    } s_character;

    typedef struct npc_s {
        s_sprite_struct sprite_character;
        s_sprite_struct bubble_text;
        sfText *text;
        sfText *text2;
        sfText *text3;
        sfText *text4;
    } npc_t;

    // Structure for the player
    typedef struct player_t {
        int xp_max;
        int xp;
        int rect_left_ship;
        int rect_left_robot;
        int level;
        int speed_space_map;
        int spare_point;
        s_sprite_struct inventory;
        s_character *player_stat;
        s_sprite_struct bubble_text;
        s_sprite_struct robot;
        s_sprite_struct fight_robot;
        t_button **objects;
        sfText *text_attack;
        sfText *text_defense;
        sfText *text_level;
        sfText *text_speed;
        sfText *text_hp;
        sfText *slash;
        sfText *text_max_hp;
        sfText *text_spare_points;
        int nb_ship;
    } s_player;

    typedef struct space_s {
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f position;
        sfTexture *space_texture;
        sfSprite *space_sprite;
        s_object *letter;
        s_object *papers;
    }   space_t;

    typedef struct planet_orange_s {
        s_sprite_struct ground;
        s_sprite_struct three_d;
        s_sprite_struct sign;
        sfRectangleShape *door;
    } planet_orange_t;

    typedef struct planet_tropical_s {
        s_sprite_struct ground;
        s_sprite_struct tree_d;
        s_sprite_struct sign_3;
    } planet_tropical_t;

    typedef struct planet_rabbit_s {
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f position;
        sfTexture *texture;
        sfSprite *sprite;
        s_sprite_struct door;
        s_sprite_struct three_d_top;
        s_sprite_struct sign_2;
        s_sprite_struct three_d_bot;
        int check;
    } planet_rabbit_t;

    typedef struct main_menu_s {
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f position;
        sfTexture *main_menu_texture;
        sfSprite *main_menu_sprite;
    } main_menu_t;

    typedef struct space_ship_text_s {
        sfText *name;
        sfText *hp;
        sfText *speed;
        sfText *defense;
        sfText *attack;
    } space_ship_text_t;

    typedef struct space_ship_s {
        t_button *gray_spaceship;
        t_button *blue_spaceship;
        t_button *green_spaceship;
        sfRectangleShape *spaceship_1;
        sfRectangleShape *spaceship_2;
        sfRectangleShape *spaceship_3;
        space_ship_text_t text_gray_spaceship;
        space_ship_text_t text_blue_spaceship;
        space_ship_text_t text_green_spaceship;
    } all_space_ship_t;

    typedef struct all_text_s {
        sfText *text_volume;
        sfText *text_size_window;
        sfText *text_commands;
        sfText *leveled_up;
        sfText *youre_dumb;
    } all_text_t;

    typedef struct planet_s {
        s_sprite_struct object;
        char **map_collision;
    } planet_t;

    typedef struct all_planet_s {
        planet_t *green;
        planet_t *orange;
        planet_t *white;
        planet_t *yellow;
        planet_t *rabbit;
        planet_t *black_hole;
        planet_t *big_ast;
        planet_t *small_ast;
    } all_planet_t;

    typedef struct all_button_s {
        t_button *load_button;
        t_button *play_button;
        t_button *settings_button;
        t_button *quit_button;
        t_button *attack_button;
        t_button *escape_button;
        t_button *more_button;
        t_button *less_button;
        t_button *size1_window_button;
        t_button *size2_window_button;
        t_button *commands_button;
        t_button *defense_plus;
        t_button *strength_plus;
        t_button *speed_plus;
        t_button *hp_plus;
    } all_button_t;

    typedef struct all_in_game_button_s {
        t_button *load_button;
        t_button *settings_button;
        t_button *quit_button;
        t_button *characters_button;
        t_button *save_button;
        t_button *resume_button;
    } all_in_game_button_t;

    typedef struct all_npc_s {
        npc_t *npc_1;
        npc_t *npc_2;
        npc_t *npc_3;
        npc_t *npc_5;
        npc_t *npc_7;
        npc_t *traductor;
    } all_npc_t;

    typedef struct all_ennemies_s {
        s_character *en_1;
        s_character *en_2;
        s_character *en_3;
        s_character *en_4;
        s_character *en_5;
        s_character *en_6;
        s_character *en_7;
        s_character *en_8;
        s_character *en_9;
        s_character *en_10;
        s_character *en_11;
        s_character *en_12;
        s_character *boss;
        s_character *current_ennemie;
    } all_ennemies_t;

    typedef struct all_fight_button_s {
        t_button *attack_button;
        t_button *escape_button;
    } all_fight_button_t;

    typedef struct labo_s {
        s_sprite_struct background_labo;
        s_sprite_struct bubble_text;
        sfText *text;
    } labo_t;

    typedef struct throne_s {
        s_sprite_struct background_throne;
        char **map_collision;
    } throne_t;

    typedef struct pablo_house_s {
        s_sprite_struct background_house;
        s_sprite_struct dog;
        s_sprite_struct bubble_text;
        s_sprite_struct tree_d;
        sfText *text;
        char **map_collision;
        int dialog;
        int restart;
    } pablo_house_t;

    typedef struct end_s {
        s_sprite_struct victory;
        s_sprite_struct defeat;
        s_sprite_struct bubble_text;
        sfText *text_vic;
        sfText *text_def;
    } end_t;

    typedef struct game_t {
        sfEvent event;
        main_menu_t main_menu;
        main_menu_t menu_spaceship_choice;
        sfSprite *fight_background;
        s_sprite_struct game_over;
        s_sprite_struct victory;
        s_sprite_struct particules;
        end_t end;
        labo_t labo;
        throne_t throne;
        all_button_t *all_button;
        all_in_game_button_t *all_in_game_buttons;
        all_fight_button_t *all_fight_buttons;
        all_space_ship_t *all_spaceships;
        all_planet_t *all_planets;
        all_text_t *all_texts;
        all_npc_t *all_npcs;
        all_ennemies_t *all_ennemies;
        s_controls *controls;
        s_player *player;
        bool play;
        sfClock *player_clock;
        sfClock *fight_clock;
        sfClock *escape_clock;
        sfClock *win_clock;
        space_t space;
        sfMusic *music;
        s_time time_planets;
        s_time time_fight;
        int check_fight;
        int count;
        sfText *fail_to_escape;
        planet_orange_t planet_orange;
        planet_rabbit_t planet_rabbit;
        planet_tropical_t tropical;
        pablo_house_t *pablo_house;
        enum e_scenes scene_to_change;
        enum e_scenes scene_to_change_after_fight;
        enum e_scenes last_scene;
        enum e_scenes space_last_scene;
        enum e_scenes command_last_scene;
        enum e_character_talking is_talking;
        enum e_character_talking is_fighted;
        enum e_fight_outcome fight_outcome;
        enum e_how_dead how_death_occured;
        int key_pressed;
    } s_game;

#endif /* !STRUCT_H_ */
