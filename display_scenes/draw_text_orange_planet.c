/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_text_orange_planet
*/

#include "function.h"

static void talk_kindly_translator(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->space.letter->check_object == LEFT_ON_GROUND &&
        rpg->all_ennemies->en_10->loot->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->traductor->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->traductor->text,
            NULL);
    }
    if (rpg->all_ennemies->en_10->loot->check_object == PICKED_UP &&
        rpg->space.letter->check_object == LEFT_ON_GROUND) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->traductor->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->traductor->text4,
            NULL);
    }
    if (rpg->all_ennemies->en_10->loot->check_object == PICKED_UP &&
        rpg->pablo_house->dialog == 2) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->traductor->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->traductor->text4, NULL);
    }
}

void talk_translator(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == TRANSLATOR) {
        talk_kindly_translator(window, rpg);
        if (rpg->space.letter->check_object == PICKED_UP &&
            rpg->space.letter->check == 2 && rpg->pablo_house->dialog != 2) {
            sfRenderWindow_drawSprite(window,
                rpg->all_npcs->traductor->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window, rpg->all_npcs->traductor->text3,
                NULL);
            rpg->pablo_house->dialog = 1;
        }
        if (rpg->space.letter->check_object == PICKED_UP &&
            rpg->space.letter->check != 2) {
            sfRenderWindow_drawSprite(window,
                rpg->all_npcs->traductor->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window, rpg->all_npcs->traductor->text2,
                NULL);
            rpg->space.letter->check = 1;
        }
    }
}

void talk_npc(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == NPC_1) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->npc_1->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->npc_1->text, NULL);
    }
    if (rpg->is_talking == NPC_3) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->npc_3->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->npc_3->text, NULL);
    }
    if (rpg->is_talking == NPC_5) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->npc_5->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->npc_5->text, NULL);
    }
    if (rpg->is_talking == NPC_7) {
        sfRenderWindow_drawSprite(window,
            rpg->all_npcs->npc_7->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_npcs->npc_7->text, NULL);
    }
}

void talk_ennemy(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == EN_1) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_1->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_1->text, NULL);
        rpg->all_ennemies->en_1->check = 1;
    }
    if (rpg->is_talking == EN_2) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_2->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_2->text,
            NULL);
        rpg->all_ennemies->en_2->check = 1;
    }
    if (rpg->is_talking == EN_5) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_5->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_5->text, NULL);
        rpg->all_ennemies->en_5->check = 1;
    }
}

void display_text_orange(sfRenderWindow *window, s_game *rpg)
{
    talk_npc(window, rpg);
    talk_ennemy(window, rpg);
    if (rpg->is_talking == EN_6) {
        sfRenderWindow_drawSprite(window,
            rpg->all_ennemies->en_6->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->all_ennemies->en_6->text, NULL);
        rpg->all_ennemies->en_6->check = 1;
    }
}
