/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_throne
*/

#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

static void draw_element_throne(sfRenderWindow *window,
        sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->boss->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->player->robot.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite_robot(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    talk_boss(window, rpg);
}

void draw_throne(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->is_fighted == BOSS && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = BOSS_END;
    }
    if (rpg->is_fighted == BOSS && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted == NO_ONE_TALKING;
        rpg->fight_outcome == NO_FIGHT;
        rpg->all_ennemies->boss->dead = 1;
        rpg->scene_to_change = END_VIC;
    }
    if (rpg->is_fighted == BOSS && rpg->fight_outcome == ESCAPE)
        rpg->scene_to_change = RABBIT_PLANETE;
    sfRenderWindow_drawSprite(window, rpg->throne.background_throne.sprite,
        NULL);
    draw_element_throne(window, view, rpg);
}
