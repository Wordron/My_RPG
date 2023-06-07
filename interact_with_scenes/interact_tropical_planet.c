/*
** EPITECH PROJECT, 2023
** interact_tropical_planet.c
** File description:
** interact_tropical_planet
*/
#include "function.h"

static void reset_tropical_planet(sfRenderWindow *window, sfView *view,
    s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->tropical.sign_3.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = SPACE_MAP;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
        rpg->is_fighted = NO_ONE_TALKING;
        rpg->all_ennemies->en_9->dead = 0;
        rpg->all_ennemies->en_10->dead = 0;
        rpg->all_ennemies->en_11->dead = 0;
        rpg->all_ennemies->en_12->dead = 0;
    }
}

static void look_who_is_talking_npc_tropical(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_12->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_12->dead == 0)
        rpg->is_talking = EN_12;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->npc_2->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
        rpg->is_talking = NPC_2;
}

static void look_who_is_talking_tropical(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_9->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_9->dead == 0)
        rpg->is_talking = EN_9;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_10->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_10->dead == 0)
        rpg->is_talking = EN_10;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_11->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_11->dead == 0)
        rpg->is_talking = EN_11;
}

void interact_tropical_planet(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    rpg->is_talking = NO_ONE_TALKING;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = TROPICAL;
    }
    look_who_is_talking_tropical(rpg);
    look_who_is_talking_npc_tropical(rpg);
    reset_tropical_planet(window, view, rpg);
    fight_ennemi_twelve(window, view, rpg);
    fight_ennemi_eleven(window, view, rpg);
    fight_ennemi_ten(window, view, rpg);
    fight_ennemi_nine(window, view, rpg);
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_10->loot->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->all_ennemies->en_10->loot->check == 1 &&
        rpg->all_ennemies->en_10->loot->check_object == LEFT_ON_GROUND)
        rpg->all_ennemies->en_10->loot->check_object = PICKED_UP;
    return;
}
