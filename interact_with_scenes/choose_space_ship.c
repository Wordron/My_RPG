/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** choose_space_ship
*/
#include "struct_game.h"
#include "function.h"

void create_players_spaceship(s_game *rpg, sfTexture *texture,
    sfIntRect rect, sfVector2f scale)
{
    rpg->player->player_stat->sprite_character.texture = texture;
    rpg->player->player_stat->sprite_character.sprite = sfSprite_create();
    rpg->player->player_stat->sprite_character.rect = rect;
    sfSprite_setTexture(rpg->player->player_stat->sprite_character.sprite,
        rpg->player->player_stat->sprite_character.texture, 0);
    sfSprite_setTextureRect(rpg->player->player_stat->sprite_character.sprite,
        rpg->player->player_stat->sprite_character.rect);
    sfSprite_setScale(rpg->player->player_stat->sprite_character.sprite, scale);
    sfClock_restart(rpg->player_clock);
}

void display_stats(s_game *rpg)
{
    rpg->player->text_hp = set_name_button(my_put_nbr
        (rpg->player->player_stat->hp), (sfVector2f){1170, 505}, 30, sfBlack);
    rpg->player->slash = set_name_button("/",
        (sfVector2f){1220, 505}, 30, sfBlack);
    rpg->player->text_max_hp = set_name_button(my_put_nbr(rpg->player
        ->player_stat->max_hp), (sfVector2f){1250, 505}, 30, sfBlack);
    rpg->player->text_speed = set_name_button(my_put_nbr(rpg->player
        ->player_stat->speed), (sfVector2f){1250, 550}, 30,sfBlack);
    rpg->player->text_attack = set_name_button(my_put_nbr
        (rpg->player->player_stat->strength), (sfVector2f){1250, 602}, 30,
        sfBlack);
    rpg->player->text_defense = set_name_button(my_put_nbr
        (rpg->player->player_stat->defense), (sfVector2f){1250, 656}, 30,
        sfBlack);
    rpg->player->text_level = set_name_button(my_put_nbr
        (rpg->player->level), (sfVector2f){1250, 706}, 30,
        sfBlack);
    rpg->player->text_spare_points = set_name_button(my_put_nbr
        (rpg->player->spare_point), (sfVector2f){1250, 746}, 30,
        sfBlack);
}

void choose_blue_space_ship(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_spaceships->blue_spaceship->state)) {
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->blue_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        rpg->player->player_stat->max_hp = 100;
        rpg->player->player_stat->hp = 100;
        rpg->player->player_stat->strength = 20;
        rpg->player->player_stat->defense = 20;
        rpg->player->player_stat->speed = 30;
        rpg->player->level = 1;
        rpg->player->nb_ship = 3;
        init_on_start_game(rpg);
        rpg->all_spaceships->blue_spaceship->state = NONE;
        rpg->command_last_scene = SPACE_MAP;
        rpg->scene_to_change = COMMANDS;
        display_stats(rpg);
    }
}

void choose_green_space_ship(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_spaceships->green_spaceship->state)) {
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->green_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        rpg->player->player_stat->max_hp = 100;
        rpg->player->player_stat->hp = 100;
        rpg->player->player_stat->strength = 20;
        rpg->player->player_stat->defense = 30;
        rpg->player->player_stat->speed = 20;
        rpg->player->level = 1;
        rpg->player->nb_ship = 2;
        init_on_start_game(rpg);
        rpg->all_spaceships->green_spaceship->state = NONE;
        rpg->command_last_scene = SPACE_MAP;
        rpg->scene_to_change = COMMANDS;
        display_stats(rpg);
    }
}

void choose_gray_space_ship(s_game *rpg)
{
    if (IS_PRESSED(rpg->all_spaceships->gray_spaceship->state)) {
        create_players_spaceship(rpg, (sfTexture *)sfSprite_getTexture(
            rpg->all_spaceships->gray_spaceship->object.sprite),
            (sfIntRect){0, 90, 70, 80}, (sfVector2f) {0.8, 0.8});
        rpg->player->player_stat->max_hp = 100;
        rpg->player->player_stat->hp = 100;
        rpg->player->player_stat->strength = 30;
        rpg->player->player_stat->defense = 20;
        rpg->player->player_stat->speed = 20;
        init_on_start_game(rpg);
        rpg->all_spaceships->gray_spaceship->state = NONE;
        rpg->command_last_scene = SPACE_MAP;
        rpg->scene_to_change = COMMANDS;
        rpg->player->level = 1;
        rpg->player->nb_ship = 1;
        display_stats(rpg);
    }
}
