/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** my_rpg
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include "button.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include <stdbool.h>

#ifndef FUNCTION_H_
    #define FUNCTION_H_

    // Check collision between a square and a round sprite
    /// @param rectangle_one Rectangle of a sprite square looking
    /// @param circle Rectangle of a sprite round looking
    /// @returns True if both circle and square are touching
    sfBool square_touching_circle(sfSprite *rectangle_one,
        sfSprite *circle);

    // Check collision between two square
    /// @param rectangle_one Rectangle of a sprite square looking
    /// @param rectangle_two Rectangle of a sprite square looking
    /// @returns True if both squares are touching
    sfBool square_touching_square(sfSprite *rectangle_one,
        sfSprite *rectangle_two);

    // Change the state of the button in parameter
    void is_button_interacted(t_button *button, sfRenderWindow *window,
        sfEvent *event);

    // Create a new window
    sfRenderWindow *create_window(sfVideoMode video_mode);

    // The function set the spacheship
    /// @returns The s_sprite_struct structure
    t_button *get_texture_spaceship(sfVector2f position,
        sfVector2f scale, sfIntRect rect, char *name);

    ////////////////////////////
    //      INITIALISATION
    ////////////////////////////
        // Init the rpg structure
        void init_struct(s_game *rpg);

        // Init the main menu on which the player will log in
        void init_main_menu(main_menu_t *main_menu, char *name, sfIntRect rect,
            sfVector2f scale);

        // Create all the buttons
        /// @returns Structure storing all buttons
        all_button_t *init_buttons(void);

        // Init the spaceship menu where the player wil choose their spaceship
        void init_menu_spaceship_choice(main_menu_t *main_menu, char *name,
            sfIntRect rect, sfVector2f scale);

            // Create the spaceship
            /// @returns The spaceships sprites for the player to choose from
            all_space_ship_t *initialise_spaceship(void);
            void create_players_spaceship(s_game *rpg, sfTexture *texture,
            sfIntRect rect, sfVector2f scale);

        // Init the space map
        void init_space(space_t *space, char *name, sfVector2f scale);
            // Init the planets on the space map
            all_planet_t *init_planets(void);

        // Init the in game menu's buttons
        all_in_game_button_t *init_all_in_game_button(void);

        void init_planet_rabbit(planet_rabbit_t *planet, char *name,
            sfVector2f scale);
        void init_planet_tropical(planet_tropical_t *planet,
            char *name, sfVector2f scale);

        void init_game_over(s_game *rpg);

        all_text_t *init_texts(void);
        s_player *init_player(void);
        s_controls *init_controls(void);
        all_npc_t *init_npc(s_game *rpg);
        all_ennemies_t *init_ennemies(void);
        all_ennemies_t *init_text_ennemies(all_ennemies_t *all_ennemies);

        void init_planet_orange(planet_orange_t *planet, char *name,
            sfVector2f scale);
        void init_inventory(s_game *rpg, char *name, sfVector2f scale,
            sfVector2f pos);
        void init_on_start_game(s_game *rpg);
        sfSprite *create_fight_background(void);
        s_character *init_monster_on_fight(s_character *monster_to_fight);
        void init_player_on_fight(s_player *player);
        void init_labo(s_game *rpg, char *name, sfVector2f scale);
        void init_throne(s_game *rpg, char *name, sfVector2f scale);
        all_fight_button_t *init_fight_button(void);
        void init_pablo_house(s_game *rpg);

    ///////////////////////////

    ////////////////////////////
    //      DISPLAY
    ////////////////////////////
        // Swap the current scene with the scene to be display
        void display_scenes(sfRenderWindow *window, sfView *view, s_game *rpg);

        void draw_main_menu(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_spaceship_choice(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void draw_space(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_commands_scene(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void display_in_game_menu(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void draw_setting_scene(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void draw_inventory(sfRenderWindow *window, sfView *view, s_game *rpg);

        // Display all buttons
        void draw_buttons(sfRenderWindow *window, all_button_t *all_buttons);

        // Display all sapceships for the player to choose from
        void display_spaceships(sfRenderWindow *window,
            all_space_ship_t *all_spaceships);
        void draw_rabbit_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void draw_orange_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void display_text_orange(sfRenderWindow *window, s_game *rpg);
        void draw_game_over(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_fight(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_labo(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_throne(sfRenderWindow *window, sfView *view, s_game *rpg);
        void draw_end_vic(sfRenderWindow *window, sfView *view, s_game *rpg);
        void display_stats(s_game *rpg);
        void draw_tropical_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);

    ///////////////////////////

    ////////////////////////////
    //      INTERACT
    ////////////////////////////
        // Analyse all events inside the window in parameters
        void analyse_events(sfRenderWindow *window, sfView *view, s_game *rpg);

        void interact_main_menu(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_spaceship_choice(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_space(sfRenderWindow *window, sfView *view, s_game *rpg);
        void interact_in_game_menu(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_commands_scene(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_setting_scene(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_rabbit_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_orange_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);
        void interact_game_over(sfRenderWindow *window, sfView *view,
        s_game *rpg);
        void interact_inventory(sfRenderWindow *window, sfView *view,
        s_game *rpg);
        void interact_labo(sfRenderWindow *window, sfView *view, s_game *rpg);
        void interact_throne(sfRenderWindow *window, sfView *view, s_game *rpg);
        void interact_end_vic(sfRenderWindow *window, sfView *view,
        s_game *rpg);
        void interact_tropical_planet(sfRenderWindow *window, sfView *view,
            s_game *rpg);

        //////// Changes with buttons //////////

        void choose_green_space_ship(s_game *rpg);
        void choose_gray_space_ship(s_game *rpg);
        void choose_blue_space_ship(s_game *rpg);
        void settings_change_if_none(s_game *rpg);
        void settings_change_if_hover(s_game *rpg);
        void settings_change_if_pressed(s_game *rpg);
        void main_menu_change_if_hover(s_game *rpg);
        void main_menu_change_if_none(s_game *rpg);
        void main_menu_change_if_pressed(sfRenderWindow *window, s_game *rpg);
        void in_game_menu_change_if_hover(s_game *rpg);
        void in_game_menu_change_if_none(s_game *rpg);
        void in_game_menu_change_if_pressed(s_game *rpg,
                sfRenderWindow *window);
        void interact_victory(sfRenderWindow *window, sfView *view,
        s_game *rpg);

        /////////////////////////////////////////

    ///////////////////////////

    t_button *set_texture_button(char *name, sfVector2f pos,
        sfVector2f scale);
    void move_sprite(s_game *rpg, sfRenderWindow *window);
    void anime_all_planets(all_planet_t *all_planets, sfClock *clock,
        float seconds);
    void change_camera_view(sfRenderWindow *window, sfView *view, s_game *rpg);
    char **load_2d_arr_from_file(char const *filepath);
    sfBool is_in_colision(char **map, int width, int length, sfVector2f pos);
    s_sprite_struct set_texture(char *name, sfVector2f pos, sfVector2f scale,
        sfIntRect rect);
    void draw_fight_buttons(sfRenderWindow *window,  s_game *rpg);
    void move_sprite_robot(s_game *rpg, sfRenderWindow *window);
    sfText *set_name_button(char *charname, sfVector2f posi, int size,
        sfColor color);
    void interact_fight(sfRenderWindow *window, sfView *view, s_game *rpg);
    int robot_attack(sfRenderWindow *window, s_game *rpg);
    int enemy_attack(sfRenderWindow *window, s_game *rpg);
    s_object *set_texture_object(char *name, sfVector2f pos, sfVector2f scale,
        sfIntRect rect);
    char *my_put_nbr(int nb);
    all_ennemies_t *init_stats_ennemies(all_ennemies_t *all_ennemies);

    void attack_opponent(s_player *player, s_character *ennemy);
    void attack_player(s_player *player, s_character *ennemy);

    void draw_victory(sfRenderWindow *window, sfView *view, s_game *rpg);
    int init_victory(s_game *rpg);
    void init_loot_for_ennemies(all_ennemies_t *all_en);

    int save_the_party(s_game *rpg);
    int load_game(s_game *rpg, sfRenderWindow *window);
    char **get_my_array(char *str);
    int is_a_char(char str);
    int count_words(char *str);
    int length_word1(char *str, int index);
    int add_to_i_if_not_space(int i, char *str, int index);
    int mini_getnbr(char *str);
    int my_strcmp(char const *s1, char const *s2);
    int my_strlen(char const *str);
    void init_end_victory(s_game *rpg);
    void init_end_defeat(s_game *rpg);
    void interact_level_up_menu(sfRenderWindow *window,
            sfView *view, s_game *rpg);
    void draw_level_up_menu(sfRenderWindow *window, sfView *view, s_game *rpg);
    void draw_end_def(sfRenderWindow *window, sfView *view, s_game *rpg);
    void interact_end_def(sfRenderWindow *window, sfView *view, s_game *rpg);
    void draw_pablo_house(sfRenderWindow *window, sfView *view, s_game *rpg);
    void interact_pablo_house(sfRenderWindow *window,
            sfView *view, s_game *rpg);
    void init_on_load_game(s_game *rpg);
    int anime_fight(s_game *rpg, sfClock *clock, sfRenderWindow *window);
    void talk_translator(sfRenderWindow *window, s_game *rpg);
    void talk_boss(sfRenderWindow *window, s_game *rpg);
    void save_letter(s_game *rpg, FILE *dir);
    void if_one_equiped(sfRenderWindow *window, s_game *rpg);
    void if_zero_equiped(sfRenderWindow *window, s_game *rpg);
    void inventory_change_if_pressed(s_game *rpg);
    int take_number(char *buff);
    int take_line(int i, FILE *dir, s_game *rpg);
    void fill_structure(s_game *rpg, int i, char *buff);
    void check_pick_up_objet(s_game *rpg, char *buff, int i);
    void draw_object_dead_ennemy(sfRenderWindow *window, s_game *rpg);
    void draw_orange_planet_ennemies(sfRenderWindow *window,s_game *rpg);
    void check_if_dead_or_victorious(s_game *rpg, enum e_character_talking
        is_fighted, s_character *en, int i);
    void draw_ennemies_trop(sfRenderWindow *window, s_game *rpg);
    void draw_npc_text(sfRenderWindow *window, s_game *rpg);
    void init_text_stats(all_space_ship_t *all_spaceships);
    all_ennemies_t *init_bubble_and_text_boss(all_ennemies_t *all_ennemies);
    all_ennemies_t *init_bubble_text_part2_ennemies(
        all_ennemies_t *all_ennemies);
    void set_text_button(all_ennemies_t *all_ennemies);
    void init_ennemi_on_fight(s_character *current, s_character *to_fight);
    void set_npcs_text(all_npc_t *all_npcs);

    void fight_ennemi_twelve(sfRenderWindow *window, sfView *view,
        s_game *rpg);
    void fight_ennemi_eleven(sfRenderWindow *window, sfView *view,
        s_game *rpg);
    void fight_ennemi_ten(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_nine(sfRenderWindow *window, sfView *view, s_game *rpg);
    void look_who_is_talking_rabbit(s_game *rpg);
    void fight_ennemi_four(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_three(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_six(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_five(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_two(sfRenderWindow *window, sfView *view, s_game *rpg);
    void fight_ennemi_one(sfRenderWindow *window, sfView *view, s_game *rpg);
    void look_ennemi_talking_orange(s_game *rpg);
    void look_npc_talking_orange(s_game *rpg);
    void fight_if_pressed(sfRenderWindow *window, s_game *rpg);
    void fight_if_none(sfRenderWindow *window, s_game *rpg);
    void fight_if_hover(sfRenderWindow *window, s_game *rpg);


    void destroy_texture(s_game *rpg);
    void destroy_text(s_game *rpg);
    void destroy_sprite(s_game *rpg);
    void destroy_structure(s_game *rpg);
    void destroy_ennemies(all_ennemies_t *all_ennemies);
    void destroy_buttons(all_button_t *all_button,
        all_fight_button_t *all_fight_buttons);
    void destroy_npcs(all_npc_t *all_npcs,
        all_in_game_button_t *all_in_game_buttons);
    void destroy(s_game *rpg, sfRenderWindow *window);

#endif /* !MY_RPG_H_ */
