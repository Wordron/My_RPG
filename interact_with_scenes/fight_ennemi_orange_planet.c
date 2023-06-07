/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** fight_ennemi_orange_planet
*/
#include "function.h"

void fight_ennemi_six(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_6->sprite_character.sprite) &&
        rpg->all_ennemies->en_6->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_6->dead == 0) {
        rpg->space_last_scene = ORANGE_PLANET;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_6;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_6);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_five(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_5->sprite_character.sprite) &&
        rpg->all_ennemies->en_5->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_5->dead == 0) {
        rpg->space_last_scene = ORANGE_PLANET;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_5;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_5);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_two(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_2->sprite_character.sprite) &&
        rpg->all_ennemies->en_2->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_2->dead == 0) {
        rpg->space_last_scene = ORANGE_PLANET;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_2;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_2);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_one(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_1->sprite_character.sprite) &&
        rpg->all_ennemies->en_1->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_1->dead == 0) {
        rpg->space_last_scene = ORANGE_PLANET;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_1;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_1);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}
