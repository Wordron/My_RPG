/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_orange_planet
*/

#include "function.h"

static void draw_npc(sfRenderWindow *window, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->npc_1->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->npc_3->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->npc_5->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->npc_7->sprite_character.sprite, NULL);
}

static void draw_element_orange_planet(sfRenderWindow *window,
    sfView *view, s_game *rpg)
{
    if (rpg->is_fighted == EN_1 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
    if (rpg->is_fighted == EN_2 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
    if (rpg->is_fighted == EN_5 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
    if (rpg->is_fighted == EN_6 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
}

static void draw_other_element_orange_planet(sfRenderWindow *window,
    sfView *view, s_game *rpg)
{
    if (rpg->is_fighted == EN_1 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_1->dead = 1;
    }
    if (rpg->is_fighted == EN_2 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_2->dead = 1;
    }
    if (rpg->is_fighted == EN_5 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_5->dead = 1;
    }
    if (rpg->is_fighted == EN_6 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_6->dead = 1;
    }
}

void draw_orange_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    draw_element_orange_planet(window, view, rpg);
    draw_other_element_orange_planet(window, view, rpg);
    sfRenderWindow_drawSprite(window, rpg->planet_orange.ground.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->planet_orange.sign.sprite, NULL);
    draw_npc(window, rpg);
    draw_orange_planet_ennemies(window, rpg);
    sfRenderWindow_drawSprite(window, rpg->player->robot.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->planet_orange.three_d.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite_robot(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    draw_object_dead_ennemy(window, rpg);
    display_text_orange(window, rpg);
    return;
}
