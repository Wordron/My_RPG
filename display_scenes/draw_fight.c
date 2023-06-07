/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_fight
*/
#include "function.h"

static void draw_text_fight(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (sfClock_getElapsedTime(rpg->escape_clock).microseconds <= 700000)
        sfRenderWindow_drawText(window, rpg->fail_to_escape, NULL);
    sfRenderWindow_drawText(window, rpg->player->player_stat->fight_hp, NULL);
    sfRenderWindow_drawText(window,
        rpg->player->player_stat->fight_max_hp, NULL);
    sfRenderWindow_drawText(window,
        rpg->player->player_stat->fight_slash, NULL);
    sfRenderWindow_drawText(window,
        rpg->all_ennemies->current_ennemie->fight_hp, NULL);
    sfRenderWindow_drawText(window,
        rpg->all_ennemies->current_ennemie->fight_max_hp, NULL);
    sfRenderWindow_drawText(window,
        rpg->all_ennemies->current_ennemie->fight_slash, NULL);
}

void draw_fight_buttons(sfRenderWindow *window,  s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->all_fight_buttons->attack_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_fight_buttons->escape_button->object.sprite, NULL);
}

void draw_fight(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->fight_background, NULL);
    sfRenderWindow_drawSprite(window, rpg->player->fight_robot.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->current_ennemie->sprite_character.sprite, NULL);
    if (rpg->play)
        draw_fight_buttons(window, rpg);
    else
        enemy_attack(window, rpg);
    if (rpg->check_fight == 1) {
        rpg->count = anime_fight(rpg, rpg->time_fight.clock, window);
        if (rpg->count == 8) {
            rpg->check_fight = 0;
            rpg->count = 0;
        }
    }
    draw_text_fight(window, view, rpg);
    return;
}
