/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** who_is_talking_orange_planet
*/
#include "function.h"

static void look_ennemi_talking_part_two_orange(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_6->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_6->dead == 0)
        rpg->is_talking = EN_6;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->traductor->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = TRANSLATOR;
    if (rpg->space.letter->check == 1 && rpg->event.key.code ==
        rpg->controls->interact && rpg->event.type == sfEvtKeyReleased)
        rpg->space.letter->check = 2;
}

void look_ennemi_talking_orange(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_1->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_1->dead == 0)
        rpg->is_talking = EN_1;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_2->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_2->dead == 0)
        rpg->is_talking = EN_2;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_5->sprite_character.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased &&
        rpg->all_ennemies->en_5->dead == 0)
        rpg->is_talking = EN_5;
    look_ennemi_talking_part_two_orange(rpg);
}

void look_npc_talking_orange(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->npc_1->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = NPC_1;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->npc_3->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = NPC_3;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->npc_5->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = NPC_5;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_npcs->npc_7->sprite_character.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased)
            rpg->is_talking = NPC_7;
}
