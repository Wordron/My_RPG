/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_rabbit_planet
*/
#include "function.h"

static void talk_ennemy(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == EN_3) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_3->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_3->text, NULL);
        rpg->all_ennemies->en_3->check = 1;
    }
    if (rpg->is_talking == EN_4) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_4->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_4->text, NULL);
        rpg->all_ennemies->en_4->check = 1;
    }
    if (rpg->is_talking == EN_7) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_7->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_7->text, NULL);
        rpg->all_ennemies->en_7->check = 1;
    }
}

static void draw_ennemies(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_ennemies->en_4->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_4->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_3->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_3->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_7->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_8->sprite_character.sprite, NULL);
}

static void change_rabbit_map(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->is_fighted == EN_3 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
    if (rpg->is_fighted == EN_4 && rpg->fight_outcome == DEATH) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = RANDOM_ENNEMI;
    }
    if (rpg->is_fighted == EN_3 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_3->dead = 1;
    }
    if (rpg->is_fighted == EN_4 && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        rpg->all_ennemies->en_4->dead = 1;
    }
}

static void draw_ennemie_text(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->is_talking == EN_8) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_8->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_8->text, NULL);
        rpg->all_ennemies->en_8->check = 1;
    }
}

void draw_rabbit_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    change_rabbit_map(window, view, rpg);
    sfRenderWindow_drawSprite(window, rpg->planet_rabbit.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->planet_rabbit.door.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->planet_rabbit.three_d_top.sprite, NULL);
    draw_ennemies(window, rpg);
    sfRenderWindow_drawSprite(window, rpg->planet_rabbit.sign_2.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->player->robot.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->planet_rabbit.three_d_bot.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite_robot(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    talk_ennemy(window, rpg);
    draw_ennemie_text(window, view, rpg);
    return;
}
