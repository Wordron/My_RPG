/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_rabbit_planet
*/
#include "function.h"

void leave_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->planet_rabbit.door.sprite) && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = THRONE;
        sfSprite_setPosition(rpg->player->robot.sprite,
        (sfVector2f){900, 900});
    }
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->planet_rabbit.sign_2.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = SPACE_MAP;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
        rpg->all_ennemies->en_3->dead = 0;
        rpg->all_ennemies->en_4->dead = 0;
        rpg->is_fighted = NO_ONE_TALKING;
    }
}

void interact_rabbit_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    rpg->is_talking = NO_ONE_TALKING;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = RABBIT_PLANETE;
    }
    leave_planet(window, view, rpg);
    look_who_is_talking_rabbit(rpg);
    fight_ennemi_three(window, view, rpg);
    fight_ennemi_four(window, view, rpg);
    return;
}
