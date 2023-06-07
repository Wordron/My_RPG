/*
** EPITECH PROJECT, 2023
** draw_elemnt_in_orange_planet.c
** File description:
** draw element in the orange planet
*/

#include "function.h"

void draw_object_dead_ennemy(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->all_ennemies->en_1->dead == 1 &&
        rpg->all_ennemies->en_1->loot->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_1->loot->sprite_object.sprite, NULL);
        rpg->all_ennemies->en_1->loot->check = 1;
    }
    if (rpg->all_ennemies->en_2->dead == 1 &&
        rpg->all_ennemies->en_2->loot->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_2->loot->sprite_object.sprite, NULL);
        rpg->all_ennemies->en_2->loot->check = 1;
    }
    if (rpg->all_ennemies->en_5->dead == 1 &&
        rpg->all_ennemies->en_5->loot->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
        rpg->all_ennemies->en_5->loot->sprite_object.sprite, NULL);
        rpg->all_ennemies->en_5->loot->check = 1;
    }
}

void draw_orange_planet_ennemies(sfRenderWindow *window,s_game *rpg)
{
    if (rpg->all_ennemies->en_1->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_1->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_2->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_2->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_5->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_5->sprite_character.sprite, NULL);
    if (rpg->all_ennemies->en_6->dead != 1)
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_6->sprite_character.sprite, NULL);
}
