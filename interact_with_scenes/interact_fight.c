/*
** EPITECH PROJECT, 2023
** interact_fight_window.c
** File description:
** interact the fight window
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

void check_for_level_up(s_game *rpg)
{
    if (rpg->player->xp >= rpg->player->xp_max) {
        rpg->player->level = rpg->player->level + 1;
        rpg->player->xp = 0;
        rpg->player->spare_point = rpg->player->spare_point + 5;
        sfText_setString(rpg->player->text_level, my_put_nbr(
            rpg->player->level));
        sfText_setString(rpg->player->text_spare_points, my_put_nbr(
            rpg->player->spare_point));
        rpg->scene_to_change_after_fight = LEVEL_UP;
        rpg->command_last_scene = rpg->space_last_scene;
    }
}

void check_for_ennemi_death(s_game *rpg)
{
    if (rpg->all_ennemies->current_ennemie->hp <= 0) {
        rpg->scene_to_change = VICTORY;
        rpg->scene_to_change_after_fight = rpg->space_last_scene;
        rpg->fight_outcome = VICTORIOUS;
        rpg->player->player_stat->hp = rpg->player->player_stat->max_hp;
        sfClock_restart(rpg->win_clock);
        rpg->player->xp = rpg->player->xp + 25;
        check_for_level_up(rpg);
        rpg->check_fight = 0;
        rpg->count = 0;
    }
}

void interact_fight(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    is_button_interacted(rpg->all_fight_buttons->attack_button, window,
        &(rpg->event));
    is_button_interacted(rpg->all_fight_buttons->escape_button, window,
        &(rpg->event));
    fight_if_hover(window, rpg);
    fight_if_none(window, rpg);
    fight_if_pressed(window, rpg);
    if (rpg->player->player_stat->hp <= 0) {
        rpg->fight_outcome = DEATH;
        rpg->scene_to_change = rpg->space_last_scene;
    }
    check_for_ennemi_death(rpg);
    return;
}
