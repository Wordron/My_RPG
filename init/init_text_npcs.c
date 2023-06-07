/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_text_npcs
*/
#include "function.h"

static void set_texture_text_npc_secondary_quest(all_npc_t *all_npcs)
{
    all_npcs->npc_2->bubble_text = all_npcs->traductor->bubble_text;
    all_npcs->npc_2->text = set_name_button("Hey you ! I lo\
st important\npapers in space ! If you find\ni\
t give it back to me !\nI will give y\
ou something\nin exchange.", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->npc_2->text2 = set_name_button("My papers !! They ar\
e very important\nto me...Thanks a lot ! Now for th\
e reward...\nI will increase your level by 1 !",
    (sfVector2f){170, 850}, 30, sfBlack);
}

static void set_texture_text_npc(all_npc_t *all_npcs)
{
    all_npcs->npc_1->bubble_text = all_npcs->traductor->bubble_text;
    all_npcs->npc_1->text = set_name_button("I've heard explosions lat\
ely...\nI'm scared", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->npc_3->bubble_text = all_npcs->traductor->bubble_text;
    all_npcs->npc_3->text = set_name_button("See the visitors with ea\
rs and a cape?\nBeware of them...", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->npc_5->bubble_text = all_npcs->traductor->bubble_text;
    all_npcs->npc_5->text = set_name_button("Do you know Pablo ?\nHe came fr\
om the neighbouring planet\nHe knows the past and translate stuffs",
    (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->npc_7->bubble_text = all_npcs->traductor->bubble_text;
    all_npcs->npc_7->text = set_name_button("Are you new here?\nI c\
an show you around!", (sfVector2f){170, 850}, 30, sfBlack);
}

static void set_texture_text_trad(all_npc_t *all_npcs)
{
    all_npcs->traductor->text2 = set_name_button("Hi !\nI see you ar\
e in possession of a letter.\nYou don't understand anything ?\nLet m\
e help you.", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->traductor->text = set_name_button("Hi ! I'm Pablo\nCo\
me see me\nif you need some help", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->traductor->text3 = set_name_button("Mmmh...It seems to be talk\
ing about some\nplans to install explosives...This\nlangu\
age is not common but you are\nlucky ! Some people arrive\
d not too\nlong ago and it happened that they\nspeak th\
is language !", (sfVector2f){170, 850}, 30, sfBlack);
    all_npcs->traductor->text4 = set_name_button("Oh you have a m\
ap ! Let me see !\nI know this area...it is\ndangerous...Yo\
u have to be extra careful...\nIm sorry but you nee\
d to be\nat least level 6 to go there.", (sfVector2f){170, 850}, 30, sfBlack);
}

void set_npcs_text(all_npc_t *all_npcs)
{
    set_texture_text_trad(all_npcs);
    set_texture_text_npc(all_npcs);
    set_texture_text_npc_secondary_quest(all_npcs);
}
