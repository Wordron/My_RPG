/*
** EPITECH PROJECT, 2023
** draw_other_throne.c
** File description:
** draw the elemetn in the throne
*/

#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

static void talk_with_boss(sfRenderWindow *window, s_game *rpg, int i)
{
    if (i == 0)
        if (rpg->all_ennemies->boss->check == 6 ||
            rpg->all_ennemies->boss->check == 7) {
            sfRenderWindow_drawSprite(window,
                rpg->all_ennemies->boss->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text4, NULL);
            rpg->all_ennemies->boss->check = 7;
        }
    if (i == 1)
        if (rpg->all_ennemies->boss->check == 8 ||
            rpg->all_ennemies->boss->check == 9) {
            sfRenderWindow_drawSprite(window,
                rpg->player->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text5, NULL);
            rpg->all_ennemies->boss->check = 9;
        }
}

static void talk_kindly_boss(sfRenderWindow *window, s_game *rpg, int i)
{
    if (i == 0)
        if (rpg->all_ennemies->boss->check == 0 ||
            rpg->all_ennemies->boss->check == 1) {
            sfRenderWindow_drawSprite(window,
                rpg->player->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text, NULL);
            rpg->all_ennemies->boss->check = 1;
        }
    if (i == 1)
        if (rpg->all_ennemies->boss->check == 2 ||
            rpg->all_ennemies->boss->check == 3) {
            sfRenderWindow_drawSprite(window,
                rpg->all_ennemies->boss->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text2, NULL);
            rpg->all_ennemies->boss->check = 3;
        }
}

static void talk_other_boss(sfRenderWindow *window, s_game *rpg, int i)
{
    if (i == 0)
        if (rpg->all_ennemies->boss->check == 10 ||
            rpg->all_ennemies->boss->check == 11) {
            sfRenderWindow_drawSprite(window,
                rpg->player->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text6, NULL);
            rpg->all_ennemies->boss->check = 11;
        }
    if (i == 1)
        if (rpg->all_ennemies->boss->check == 4 ||
            rpg->all_ennemies->boss->check == 5) {
            sfRenderWindow_drawSprite(window,
                rpg->player->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text3, NULL);
            rpg->all_ennemies->boss->check = 5;
        }
}

static void talk_usely_boss(sfRenderWindow *window, s_game *rpg, int i)
{
    if (i == 0)
        if (rpg->all_ennemies->boss->check == 14 ||
            rpg->all_ennemies->boss->check == 15) {
            sfRenderWindow_drawSprite(window,
                rpg->player->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text8, NULL);
            rpg->all_ennemies->boss->check = 15;
        }
    if (i == 1)
        if (rpg->all_ennemies->boss->check == 12 ||
            rpg->all_ennemies->boss->check == 13) {
            sfRenderWindow_drawSprite(window,
                rpg->all_ennemies->boss->bubble_text.sprite, NULL);
            sfRenderWindow_drawText(window,
                rpg->all_ennemies->boss->text4, NULL);
            rpg->all_ennemies->boss->check = 13;
        }
}

void talk_boss(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == BOSS) {
        talk_with_boss(window, rpg, 0);
        talk_with_boss(window, rpg, 1);
        talk_kindly_boss(window, rpg, 0);
        talk_kindly_boss(window, rpg, 1);
        talk_other_boss(window, rpg, 0);
        talk_other_boss(window, rpg, 1);
        talk_usely_boss(window, rpg, 0);
        talk_usely_boss(window, rpg, 1);
    }
}
