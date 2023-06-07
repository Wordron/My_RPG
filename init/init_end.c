/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_end
*/

#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

static void init_other_end_victory(s_game *rpg)
{
    rpg->end.victory.sprite = sfSprite_create();
    rpg->end.victory.texture = sfTexture_createFromFile
        ("texture/background/victory_bg.jpg", NULL);
    sfSprite_setTexture(rpg->end.victory.sprite, rpg->end.victory.texture,
        sfTrue);
}

static void init_vict_text(s_game *rpg)
{
    rpg->end.text_vic = set_name_button("Once the fight ended, the robot wen\
t back to the translator to show him communication\nwith king BW\
ABWABWA. Pablo explained the words of the king to him. The kin\
g had\nrecently come to power and had always wanted revenge for per\
secutions that its\npeople had suffered. Indeed, his people ha\
d often been enslaved and forced to\nwork for others. Rabb\
its were often forced to take care of carrot fields. Not\nwantin\
g to suffer this tragedy, the king began to devise a plan to\ndes\
troy all the planets in the system in which they lived. R3-D3 t\
hen returned to Earth\nto bring his discovery to the scientis\
ts who created it. The\nscientists wrote a summary and then took the fi\
ndings of the robot. A few\nyears passed, before one day a ship landed i\
n front of the scientists laboratory. An\nextrateresstre went out pa\
nicked and wounded, coming directly\nto ask the human group for help. I\
t would appear that their assistance is\nrequired elsewhere. A new mis\
sion awaits Maxime, Camille, Loup and Regine!\nPRESS SPACE",
        (sfVector2f){370, 370}, 27, sfBlack);
}

void init_end_victory(s_game *rpg)
{
    init_other_end_victory(rpg);
    sfSprite_setScale(rpg->end.victory.sprite, (sfVector2f){1, 1});
    rpg->end.bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){250, 250}, (sfVector2f){2.5, 2.5},
        (sfIntRect){0, 0, 650, 250});
    init_vict_text(rpg);
    return;
}

static void init_other_end_defeat(s_game *rpg)
{
    rpg->end.defeat.sprite = sfSprite_create();
    rpg->end.defeat.texture = sfTexture_createFromFile
        ("texture/background/defeat_bg.jpg", NULL);
    sfSprite_setTexture(rpg->end.defeat.sprite, rpg->end.defeat.texture,
        sfTrue);
    sfSprite_setScale(rpg->end.defeat.sprite, (sfVector2f){1, 1});
}

void init_end_defeat(s_game *rpg)
{
    init_other_end_defeat(rpg);
    rpg->end.bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){250, 250}, (sfVector2f){2.5, 2.5},
        (sfIntRect){0, 0, 650, 250});
    rpg->end.text_def = set_name_button("Once the fight ended, the robot was l\
eft in pieces and the king\nwas smiling. R3-D3 was still slightly consciou\
s, he felt he was about to deactivate\nbecause of the heavy damage he \
suffered. The young robot then sent a last\nmessage to its creat\
ors, thanking them for having given him a good life,\nbefore goin\
g out completely. The king asked to be removed from the carcass of the ro\
bot\nand he continued his plan of destruction. Indeed, in the months that fol\
lowed, 4\nplanets had been destroyed. Pablo and some of his ali\
en friends went to\nEarth to seek shelter from the growing chaos. However BWAB\
WABWA had not finished and\nwas determined to destroy everyone under for \
revenge. Our scientists\nsadly launched a new project, R4-D4, t\
o counter the threat that was\napproaching their own solar system.\n\
\nPRESS SPACE", (sfVector2f){380, 400}, 27, sfBlack);
    return;
}
