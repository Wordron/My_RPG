/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_pablo_house
*/
#include "function.h"

static void look_who_is_talking_pablo_house(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->traductor->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = TRANSLATOR;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->pablo_house->dog.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = DOG;
}

static void update_main_quest(s_game *rpg)
{
    if (rpg->space.letter->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased)
        rpg->space.letter->check = 2;
    if (rpg->pablo_house->dialog == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased)
        rpg->pablo_house->dialog = 2;
    if (rpg->pablo_house->restart == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased) {
        rpg->pablo_house->dialog = 0;
        rpg->space.letter->check = 0;
        rpg->pablo_house->restart = 0;
    }
}

void interact_pablo_house(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    rpg->is_talking = NO_ONE_TALKING;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = PABLO_HOUSE;
    }
    if (rpg->event.key.code == sfKeySpace && rpg->event.type ==
        sfEvtKeyReleased &&
        sfSprite_getPosition(rpg->player->robot.sprite).y >= 950) {
        rpg->scene_to_change = ORANGE_PLANET;
        rpg->pablo_house->restart = 1;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){1515, 528});
    }
    look_who_is_talking_pablo_house(rpg);
    update_main_quest(rpg);
    return;
}
