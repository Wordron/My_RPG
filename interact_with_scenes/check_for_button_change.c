/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** check_for_button_change
*/
#include "function.h"

void fight_if_hover(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_fight_buttons->attack_button->state == HOVER)
        sfSprite_setScale(rpg->all_fight_buttons->attack_button->
            object.sprite, (sfVector2f){2.5, 2.5});
    if (rpg->all_fight_buttons->escape_button->state == HOVER)
        sfSprite_setScale(rpg->all_fight_buttons->escape_button->
            object.sprite, (sfVector2f){2.5, 2.5});
}

void fight_if_none(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_fight_buttons->attack_button->state == NONE) {
        sfSprite_setScale(rpg->all_fight_buttons->attack_button->
            object.sprite, (sfVector2f){2, 2});
    }
    if (rpg->all_fight_buttons->escape_button->state == NONE)
        sfSprite_setScale(rpg->all_fight_buttons->escape_button->
            object.sprite, (sfVector2f){2, 2});
}

static void fight_if_pressed_part_two(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_fight_buttons->escape_button->state == PRESSED) {
        if (rand() % 100 < 20) {
            rpg->fight_outcome = ESCAPE;
            rpg->scene_to_change = rpg->space_last_scene;
        }
        rpg->fail_to_escape = set_name_button("You failed to escape !",
            (sfVector2f){700, 500}, 50, sfBlack);
        rpg->all_fight_buttons->escape_button->state = NONE;
        sfSprite_setScale(rpg->all_fight_buttons->escape_button->
            object.sprite, (sfVector2f){2, 2});
        sfClock_restart(rpg->escape_clock);
        attack_player(rpg->player, rpg->all_ennemies->current_ennemie);
    }
}

void fight_if_pressed(sfRenderWindow *window, s_game *rpg)
{
    fight_if_pressed_part_two(window, rpg);
    if (rpg->all_fight_buttons->attack_button->state == PRESSED) {
        if (rpg->player->player_stat->speed >
            rpg->all_ennemies->current_ennemie->speed) {
            attack_opponent(rpg->player, rpg->all_ennemies->current_ennemie);
            attack_player(rpg->player, rpg->all_ennemies->current_ennemie);
            rpg->check_fight = 1;
        }
        if (rpg->player->player_stat->speed <=
            rpg->all_ennemies->current_ennemie->speed) {
            attack_player(rpg->player, rpg->all_ennemies->current_ennemie);
            rpg->check_fight = 1;
            attack_opponent(rpg->player, rpg->all_ennemies->current_ennemie);
        }
        rpg->all_fight_buttons->attack_button->state = NONE;
        sfSprite_setScale(rpg->all_fight_buttons->attack_button->
            object.sprite, (sfVector2f){2, 2});
    }
}
