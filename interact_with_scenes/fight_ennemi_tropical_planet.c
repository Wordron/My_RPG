/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** fight_ennemi_tropical_planet
*/
#include "function.h"

void fight_ennemi_twelve(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_12->sprite_character.sprite) &&
        rpg->all_ennemies->en_12->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_12->dead == 0) {
        rpg->space_last_scene = TROPICAL;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_12;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_12);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_eleven(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_11->sprite_character.sprite) &&
        rpg->all_ennemies->en_11->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_11->dead == 0) {
        rpg->space_last_scene = TROPICAL;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_11;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_11);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_ten(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_10->sprite_character.sprite) &&
        rpg->all_ennemies->en_10->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_10->dead == 0) {
        rpg->space_last_scene = TROPICAL;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_10;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_10);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}

void fight_ennemi_nine(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_9->sprite_character.sprite) &&
        rpg->all_ennemies->en_9->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_9->dead == 0) {
        rpg->space_last_scene = TROPICAL;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = EN_9;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->en_9);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
}
