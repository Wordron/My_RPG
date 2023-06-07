/*
** EPITECH PROJECT, 2023
** init_other_enemies_text.c
** File description:
** init the text of the enemies
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"

all_ennemies_t *init_bubble_and_text_boss(all_ennemies_t *all_ennemies)
{
    all_ennemies->boss->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){1050, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->boss->text = set_name_button("Hello, I'm R3-D3, I'm investig\
ating the\nexplosions that occurred\na few weeks ago.",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->boss->text2 = set_name_button("Bwabwa\
    bwa bwabwabwa bwa bwa !!", (sfVector2f){1120, 850}, 30, sfBlack);
    all_ennemies->boss->text3 = set_name_button("I don't understand anyt\
hing at all.\nPhysical language enables communication\nbetween two people wh\
o speak different\nlanguages. I should try\nto mimic my words",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->boss->text4 = set_name_button("Bwabwabwabwabwabwa bwabwa\
\nbwabwabwa bwabwa bwa bwabwabwabwa\nbwabwa bwa BWAHAHAHAH!!",
        (sfVector2f){1120, 850}, 30, sfBlack);
    set_text_button(all_ennemies);
    return (all_ennemies);
}

all_ennemies_t *init_bubble_text_part2_ennemies
    (all_ennemies_t *all_ennemies)
{
    all_ennemies->en_5->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_6->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_7->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_8->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_11->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_12->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    return (all_ennemies);
}
