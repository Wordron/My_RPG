/*
** EPITECH PROJECT, 2023
** fight_game_funtion.c
** File description:
** fight in the game
*/

#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "function.h"
#include "button.h"
#include <stdbool.h>
#include <stdio.h>

void attack_opponent(s_player *player, s_character *ennemy)
{
    int attack_damage = ((player->player_stat->strength
        * ((player->player_stat->speed / 100) + 1))
        - ennemy->defense * 0.3);

    if (attack_damage < 10)
        attack_damage = 10;
    ennemy->hp = ennemy->hp - attack_damage;
    sfText_setString(ennemy->fight_hp, my_put_nbr(ennemy->hp));
}

void attack_player(s_player *player, s_character *ennemy)
{
    int attack_damage = ((ennemy->strength * ((ennemy->speed / 100) + 1))
        - player->player_stat->defense * 0.3);

    if (attack_damage < 10)
        attack_damage = 10;
    player->player_stat->hp = player->player_stat->hp - attack_damage;
    sfText_setString(player->player_stat->fight_hp,
        my_put_nbr(player->player_stat->hp));
}

void fight(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->play == true) {
        robot_attack(window, rpg);
        rpg->play = false;
    } else {
        enemy_attack(window, rpg);
        rpg->play = true;
    }
}

int robot_attack(sfRenderWindow *window, s_game *rpg)
{
    if (sfClock_getElapsedTime(rpg->fight_clock).microseconds > 400) {
        sfSprite_setPosition(rpg->player->fight_robot.sprite,
            (sfVector2f){120, 700});
        sfClock_restart(rpg->fight_clock);
    }
    rpg->play = false;
    return 0;
}

int enemy_attack(sfRenderWindow *window, s_game *rpg)
{
    if (sfClock_getElapsedTime(rpg->fight_clock).microseconds > 400) {
        sfSprite_setPosition(rpg->all_ennemies->en_1->sprite_character.sprite,
            (sfVector2f){1400, 710});
        sfClock_restart(rpg->fight_clock);
    }
    rpg->play = true;
    return 0;
}
