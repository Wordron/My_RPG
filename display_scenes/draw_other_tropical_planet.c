/*
** EPITECH PROJECT, 2023
** draw_other_tropical_planet.c
** File description:
** draw element in the tropical planet
*/

#include "function.h"

static void increase_level(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->space.papers->check == 0) {
        rpg->space.papers->check = 1;
        rpg->player->level++;
        rpg->player->spare_point = rpg->player->spare_point + 5;
        sfText_setString(rpg->player->text_spare_points,
            my_put_nbr(rpg->player->spare_point));
        sfText_setString(rpg->player->text_level,
            my_put_nbr(rpg->player->level));
    }
}

void draw_npc_text(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == NPC_2) {
        if (rpg->space.papers->check_object == LEFT_ON_GROUND) {
            sfRenderWindow_drawSprite(window,
                rpg->all_npcs->npc_2->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_npcs->npc_2->text, NULL);
        }
        if (rpg->space.papers->check_object == PICKED_UP) {
            sfRenderWindow_drawSprite(window,
                rpg->all_npcs->npc_2->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_npcs->npc_2->text2, NULL);
            increase_level(window, rpg);
        }
    }
}

void draw_ennemies_trop(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_ennemies->en_9->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_9->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_10->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_10->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_11->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_11->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_12->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_12->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->npc_2->sprite_character.sprite, NULL);
}

void check_if_dead_or_victorious(s_game *rpg, enum e_character_talking
    is_fighted, s_character *en, int i)
{
    if (i == 0)
        if (rpg->is_fighted == is_fighted && rpg->fight_outcome == DEATH) {
            rpg->scene_to_change = GAME_OVER;
            rpg->how_death_occured = RANDOM_ENNEMI;
        }
    if (i == 1)
        if (rpg->is_fighted == is_fighted && rpg->fight_outcome == VICTORIOUS) {
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->fight_outcome = NO_FIGHT;
        en->dead = 1;
    }
}
