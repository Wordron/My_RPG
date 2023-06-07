/*
** EPITECH PROJECT, 2023
** monsters.c
** File description:
** monsters
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"

static s_character *set_texture_character(char *name, sfVector2f pos,
    sfVector2f scale, sfIntRect rect)
{
    s_character *chara = malloc(sizeof(s_character));

    chara->sprite_character.texture = sfTexture_createFromFile
        (name, NULL);
    chara->sprite_character.sprite = sfSprite_create();
    sfSprite_setTexture(chara->sprite_character.sprite,
        chara->sprite_character.texture, sfTrue);
    chara->sprite_character.rect = rect;
    chara->sprite_character.position = pos;
    chara->sprite_character.scale = scale;
    sfSprite_setTextureRect(chara->sprite_character.sprite,
        chara->sprite_character.rect);
    sfSprite_setPosition(chara->sprite_character.sprite,
        chara->sprite_character.position);
    sfSprite_setScale(chara->sprite_character.sprite,
        chara->sprite_character.scale);
    return (chara);
}

static all_ennemies_t *init_texture_ennemies_trop(all_ennemies_t *all_ennemies)
{
    all_ennemies->en_9 = set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){400, 700}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_10 = set_texture_character("texture/enemy/enemy_red.png",
        (sfVector2f){1100, 950}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_11 = set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){1500, 70}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_12 = set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){1600, 820}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    return (all_ennemies);
}

static all_ennemies_t *init_texture_ennemies(all_ennemies_t *all_ennemies)
{
    all_ennemies->en_3 = set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){1600, 580}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_4 = set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){200, 580}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_5 = set_texture_character("texture/enemy/enemy_red.png",
        (sfVector2f){1700, 70}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_6 = set_texture_character("texture/enemy/enemy_red.png",
        (sfVector2f){700, 920}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_7 = set_texture_character("texture/enemy/enemy_red.png",
        (sfVector2f){750, 250}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_8 = set_texture_character("texture/enemy/enemy_red.png",
        (sfVector2f){1150, 250}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    init_texture_ennemies_trop(all_ennemies);
    return (all_ennemies);
}

static void set_dead_check(all_ennemies_t *all_ennemies)
{
    all_ennemies->en_1->dead = 0;
    all_ennemies->en_2->dead = 0;
    all_ennemies->en_3->dead = 0;
    all_ennemies->en_4->dead = 0;
    all_ennemies->en_5->dead = 0;
    all_ennemies->en_6->dead = 0;
    all_ennemies->en_7->dead = 0;
    all_ennemies->en_8->dead = 0;
    all_ennemies->en_9->dead = 0;
    all_ennemies->en_10->dead = 0;
    all_ennemies->en_11->dead = 0;
    all_ennemies->en_12->dead = 0;
}

all_ennemies_t *init_ennemies(void)
{
    all_ennemies_t *all_ennemies = malloc(sizeof(all_ennemies_t));

    all_ennemies->en_1 =
        set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){450, 150}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->en_2 =
        set_texture_character("texture/enemy/enemy_blue.png",
        (sfVector2f){1600, 860}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 250, 250});
    all_ennemies->boss =
        set_texture_character("texture/enemy/boss.png",
        (sfVector2f){850, 300}, (sfVector2f){0.8, 0.8},
        (sfIntRect){0, 0, 250, 250});
    init_texture_ennemies(all_ennemies);
    init_text_ennemies(all_ennemies);
    init_stats_ennemies(all_ennemies);
    init_loot_for_ennemies(all_ennemies);
    set_dead_check(all_ennemies);
    return (all_ennemies);
}
