/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_labo
*/

#include "function.h"
#include "button.h"

void init_text_intro(s_game *rpg)
{
    rpg->labo.text = set_name_button("One day, a group of scientifics saw tw\
o planets explose suddenly\nin the space system of Zia. The planet Taz expl\
oded first then the\nplanet Bvuy explosed only two weeks after. Maxi\
me, Camille, Loup\nand Regine, the scientifics, decided to creat\
e a project in order\nto find the truth behind the explosio\
ns. They decided to\ncreate a robot who can transform int\
o a spaceship to go in the\nspace to discover what happene\
d. The robot had an AI implemented in\nitself. It i\
s able to think and develop hypothesis. Now\nthe departur\
e is close, be careful of your surrendings and\nexplo\
re the planet and its inhabitants to discover the truth\n\
Press Space to choose your spaceship !\n",
        (sfVector2f){180, 550}, 28, sfBlack);
}

void init_labo(s_game *rpg, char *name, sfVector2f scale)
{
    rpg->labo.background_labo.texture = sfTexture_createFromFile(name, NULL);
    rpg->labo.background_labo.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->labo.background_labo.sprite,
        rpg->labo.background_labo.texture, sfTrue);
    rpg->labo.background_labo.scale = scale;
    sfSprite_setScale(rpg->labo.background_labo.sprite,
        rpg->labo.background_labo.scale);
    init_text_intro(rpg);
    rpg->labo.bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){80, 450}, (sfVector2f){2.1, 2.1},
        (sfIntRect){0, 0, 650, 250});
}
