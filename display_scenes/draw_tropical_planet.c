/*
** EPITECH PROJECT, 2023
** draw_tropical_planet.c
** File description:
** draw_tropical_planet
*/

#include "function.h"

static void draw_text(sfRenderWindow *window,
    enum e_character_talking is_talking,s_character *en, s_game *rpg)
{
    if (rpg->is_talking == is_talking) {
        sfRenderWindow_drawSprite(window,
            en->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window,
            en->text, NULL);
        en->check = 1;
    }
}

static void draw_ennemies_text(sfRenderWindow *window, s_game *rpg)
{
    draw_text(window, EN_9, rpg->all_ennemies->en_9, rpg);
    draw_text(window, EN_10, rpg->all_ennemies->en_10, rpg);
    draw_text(window, EN_11, rpg->all_ennemies->en_11, rpg);
    draw_text(window, EN_12, rpg->all_ennemies->en_12, rpg);
}

static void draw_object_dead_ennemy_part2(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_ennemies->en_10->dead == 1 &&
        rpg->all_ennemies->en_10->loot->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_10->loot->sprite_object.sprite, NULL);
        rpg->all_ennemies->en_10->loot->check = 1;
    }
    if (rpg->all_ennemies->en_10->dead == 1 &&
        rpg->all_ennemies->en_10->loot->check_object == PICKED_UP &&
        square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_10->loot->sprite_object.sprite)) {
            sfRenderWindow_drawSprite(window,
                rpg->all_ennemies->en_10->loot->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->en_10->loot->text, NULL);
    }
}

void draw_tropical_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->tropical.ground.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->tropical.sign_3.sprite, NULL);
    draw_ennemies_trop(window, rpg);
    sfRenderWindow_drawSprite(window, rpg->player->robot.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->tropical.tree_d.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite_robot(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    check_if_dead_or_victorious(rpg, EN_9, rpg->all_ennemies->en_9, 0);
    check_if_dead_or_victorious(rpg, EN_10, rpg->all_ennemies->en_10, 0);
    check_if_dead_or_victorious(rpg, EN_11, rpg->all_ennemies->en_11, 0);
    check_if_dead_or_victorious(rpg, EN_9, rpg->all_ennemies->en_9, 1);
    check_if_dead_or_victorious(rpg, EN_10, rpg->all_ennemies->en_10, 1);
    check_if_dead_or_victorious(rpg, EN_11, rpg->all_ennemies->en_11, 1);
    check_if_dead_or_victorious(rpg, EN_12, rpg->all_ennemies->en_12, 1);
    draw_object_dead_ennemy_part2(window, rpg);
    draw_npc_text(window, rpg);
    draw_ennemies_text(window, rpg);
    return;
}
