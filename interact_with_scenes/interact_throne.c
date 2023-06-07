/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** interact_throne
*/
#include "function.h"

static void if_colision(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->boss->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->boss->check == 15) {
        rpg->space_last_scene = THRONE;
        rpg->scene_to_change = FIGHT;
        rpg->is_fighted = BOSS;
        init_ennemi_on_fight(rpg->all_ennemies->current_ennemie,
        rpg->all_ennemies->boss);
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        init_player_on_fight(rpg->player);
        sfRenderWindow_setView(window, view);
    }
    return;
}

static void check_talk_boss_part_two(s_game *rpg)
{
    if (rpg->all_ennemies->boss->check == 7 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 8;
    if (rpg->all_ennemies->boss->check == 9 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 10;
    if (rpg->all_ennemies->boss->check == 11 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 12;
    if (rpg->all_ennemies->boss->check == 13 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 14;
}

static void check_talk_boss(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->boss->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->is_talking = BOSS;
    if (rpg->all_ennemies->boss->check == 1 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 2;
    if (rpg->all_ennemies->boss->check == 3 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 4;
    if (rpg->all_ennemies->boss->check == 5 &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->all_ennemies->boss->check = 6;
    check_talk_boss_part_two(rpg);
}

void interact_throne(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    rpg->is_talking = NO_ONE_TALKING;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = THRONE;
    }
    if_colision(window, view, rpg);
    if (rpg->event.key.code == sfKeySpace && rpg->event.type ==
        sfEvtKeyReleased &&
        sfSprite_getPosition(rpg->player->robot.sprite).y >= 950) {
        rpg->scene_to_change = RABBIT_PLANETE;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){933, 220});
        rpg->all_ennemies->boss->check = 0;
    }
    check_talk_boss(rpg);
}
