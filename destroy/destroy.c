/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** destroy
*/
#include "function.h"

void destroy(s_game *rpg, sfRenderWindow *window)
{
    sfClock_destroy(rpg->player_clock);
    sfClock_destroy(rpg->fight_clock);
    sfClock_destroy(rpg->escape_clock);
    sfClock_destroy(rpg->win_clock);
    sfClock_destroy(rpg->time_planets.clock);
    sfClock_destroy(rpg->time_fight.clock);
    sfMusic_destroy(rpg->music);
    destroy_texture(rpg);
    destroy_text(rpg);
    destroy_sprite(rpg);
    destroy_structure(rpg);
    sfRenderWindow_destroy(window);
}
