/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_on_fight
*/
#include "function.h"
#include "button.h"
#include <stdio.h>

void init_ennemi_on_fight(s_character *current, s_character *to_fight)
{
    current->hp = to_fight->hp;
    current->max_hp = to_fight->max_hp;
    current->defense = to_fight->defense;
    current->speed = to_fight->speed;
    current->strength = to_fight->strength;
    current->sprite_character.texture = to_fight->sprite_character.texture;
    sfSprite_setTexture(current->sprite_character.sprite,
        current->sprite_character.texture, sfTrue);
    current->fight_hp = set_name_button(my_put_nbr(current->hp),
        (sfVector2f){1550, 605}, 40, sfBlack);
    current->fight_max_hp = set_name_button(my_put_nbr(current->max_hp),
        (sfVector2f){1690, 605}, 40, sfBlack);
    current->fight_slash = set_name_button("/", (sfVector2f){1630, 605}, 40,
        sfBlack);
}

void init_player_on_fight(s_player *player)
{
    player->fight_robot = set_texture("texture/player/robot.png",
    (sfVector2f){50, 700}, (sfVector2f){4, 4}, (sfIntRect){60, 0, 70, 100});
    player->player_stat->fight_hp = set_name_button(my_put_nbr
        (player->player_stat->hp), (sfVector2f){100, 605}, 40, sfBlack);
    player->player_stat->fight_max_hp = set_name_button(my_put_nbr
        (player->player_stat->max_hp), (sfVector2f){220, 605}, 40, sfBlack);
    player->player_stat->fight_slash = set_name_button("/",
    (sfVector2f){175, 605}, 40, sfBlack);
}

static s_character *init_stats_monster(s_character *monster_to_fight,
    s_character *monster)
{
    monster->sprite_character.sprite = sfSprite_create();
    monster->defense = monster_to_fight->defense;
    monster->max_hp = monster_to_fight->max_hp;
    monster->hp = monster_to_fight->hp;
    monster->defense = monster_to_fight->defense;
    monster->speed = monster_to_fight->speed;
    return (monster);
}

s_character *init_monster_on_fight(s_character *monster_to_fight)
{
    s_character *monster = malloc(sizeof(s_character));

    init_stats_monster(monster_to_fight, monster);
    monster->sprite_character.scale.x = 1;
    monster->sprite_character.scale.y = 1;
    monster->sprite_character.position.x = 1500;
    monster->sprite_character.position.y = 710;
    monster->sprite_character.texture = (sfTexture *)sfSprite_getTexture
        (monster_to_fight->sprite_character.sprite);
    sfSprite_setTexture(monster->sprite_character.sprite,
        monster->sprite_character.texture, sfTrue);
    sfSprite_setScale(monster->sprite_character.sprite,
        monster->sprite_character.scale);
    sfSprite_setPosition(monster->sprite_character.sprite,
        monster->sprite_character.position);
    return (monster);
}
