/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** anime_fight
*/

#include "function.h"

static void move_rect(s_game *rpg, int offset,
    int max_value, sfRenderWindow *window)
{
    offset = 75;
    rpg->particules.rect.left += offset;
    if (rpg->particules.rect.left >= max_value) {
        rpg->particules.rect.left = 0;
    }
    sfRenderWindow_drawSprite(window, rpg->particules.sprite, NULL);
    sfSprite_setTextureRect(rpg->particules.sprite, rpg->particules.rect);
}

int anime_fight(s_game *rpg, sfClock *clock, sfRenderWindow *window)
{
    rpg->time_fight.time = sfClock_getElapsedTime(rpg->time_fight.clock) ;
    rpg->time_fight.seconds = rpg->time_fight.time.microseconds / 1000000.0;
    if (rpg->time_fight.seconds >= 0.5) {
        if (rpg->time_fight.seconds >= 0.3) {
            move_rect(rpg, 0, 620, window);
            return (rpg->count + 1);
        }
        sfClock_restart(clock);
    }
}
