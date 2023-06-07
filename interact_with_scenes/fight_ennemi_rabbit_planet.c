/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** fight_ennemi_orange_planet
*/
#include "function.h"

static void look_who_is_talking_part_two_rabbit(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_7->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->is_talking = EN_7;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_8->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->is_talking = EN_8;
}

void look_who_is_talking_rabbit(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_3->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_3->dead == 0)
        rpg->is_talking = EN_3;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_4->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_4->dead == 0)
        rpg->is_talking = EN_4;
    look_who_is_talking_part_two_rabbit(rpg);
}

void fight_ennemi_four(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_4->sprite_character.sprite) &&
        rpg->all_ennemies->en_4->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_4->dead == 0) {
        rpg->space_last_scene = RABBIT_PLANETE;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_4;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_4);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_three(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_3->sprite_character.sprite) &&
        rpg->all_ennemies->en_3->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_3->dead == 0) {
        rpg->space_last_scene = RABBIT_PLANETE;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_3;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_3);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}
