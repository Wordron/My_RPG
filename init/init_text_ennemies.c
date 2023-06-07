/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_text_ennemies
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"

void set_text_button(all_ennemies_t *all_ennemies)
{
    all_ennemies->boss->text5 = set_name_button("I don't know if I made myself\
\nunderstood, maybe I should try\nto speak his language. I have\
\nrecorded many words of their\nlanguage in my database.",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->boss->text6 = set_name_button("BwaBwaBwa Bwa Bwa BwaBwa\
\nBwaBwa BwaBwaBwaBwaBwaBwa BwaBwa\nBwaBwaBwa Bwa BwaBwa BwaBwaBwa\
\nBwaBwa Bwa Bwa BwaBwaBwaBwaBwa\nBwaBwa BwaBwaBwa BwaBwa Bwa\
\nBwaBwa BwaBwaBwaBwa !",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->boss->text7 = set_name_button("BWA BWABWABWA !!!!\
\nBWABWABWABWA BWABWA BWABWA BWA !!\nBWABWABWABWABWABWA\
\nBWA BWABWA BWABWABWABWA BWABWA BWA\nBWABWABWABWA BWA BWA BWA\
\nBWABWABWABWA BWAAAAAAAAAAAAAAA !!",
        (sfVector2f){1120, 850}, 30, sfBlack);
    all_ennemies->boss->text8 = set_name_button("I think my pronunciation \
changed\nthe meaning of my words. It would seem\nthat when the pronunciation \
is a little\nvibrant, the meaning of the words\nbecomes insulting. \
It looks like the king\nwants to fight now.",
        (sfVector2f){170, 850}, 30, sfBlack);
}

static all_ennemies_t *init_bubble_text_ennemies(all_ennemies_t *all_ennemies)
{
    all_ennemies->en_1->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_2->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_3->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_4->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_9->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    all_ennemies->en_10->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    init_bubble_text_part2_ennemies(all_ennemies);
    return (all_ennemies);
}

static void init_sentence_ennemies(all_ennemies_t *all_ennemies)
{
    init_bubble_text_ennemies(all_ennemies);
    init_bubble_and_text_boss(all_ennemies);
    all_ennemies->en_1->text = set_name_button("Why are you looking at me ?\
    \nYou want to fight", (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_2->text = set_name_button("Explosions ? What explosions ?\
    \nI don't know what you are\ntalking about !!", (sfVector2f){170, 850},
        30, sfBlack);
    all_ennemies->en_3->text = set_name_button("BWABWABWA is our king !\n",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_4->text = set_name_button("BWABWABWA is very strong !\n",
        (sfVector2f){170, 850}, 30, sfBlack);
}

all_ennemies_t *init_text_ennemies(all_ennemies_t *all_ennemies)
{
    init_sentence_ennemies(all_ennemies);
    all_ennemies->en_5->text = set_name_button("The map...I think BwaBwaaa\n\
has it\n", (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_6->text = set_name_button("Where is the commander ?",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_7->text = set_name_button("BWABWABWA is beautiful",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_8->text = set_name_button("I love you BWABWABWA !",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_9->text = set_name_button("Fight with me !",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_10->text = set_name_button("I am commander Bwabwaaa !!",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_11->text = set_name_button("I am a pretty princess !",
        (sfVector2f){170, 850}, 30, sfBlack);
    all_ennemies->en_12->text = set_name_button("I will kill you !",
        (sfVector2f){170, 850}, 30, sfBlack);
    return (all_ennemies);
}
