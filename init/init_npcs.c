/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_npcs
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"

static npc_t *set_texture_npc(char *name, sfVector2f pos, sfVector2f scale,
    sfIntRect rect)
{
    npc_t *npc = malloc(sizeof(npc_t));

    npc->sprite_character.texture = sfTexture_createFromFile(name, NULL);
    npc->sprite_character.sprite = sfSprite_create();
    sfSprite_setTexture(npc->sprite_character.sprite,
        npc->sprite_character.texture, sfTrue);
    npc->sprite_character.rect = rect;
    npc->sprite_character.position = pos;
    npc->sprite_character.scale = scale;
    sfSprite_setTextureRect(npc->sprite_character.sprite,
        npc->sprite_character.rect);
    sfSprite_setPosition(npc->sprite_character.sprite,
        npc->sprite_character.position);
    sfSprite_setScale(npc->sprite_character.sprite,
        npc->sprite_character.scale);
    return (npc);
}

static void set_texture_all_npc(all_npc_t *all_npcs)
{
    all_npcs->npc_1 = set_texture_npc("texture/npc/green.png",
        (sfVector2f){50, 750}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 240, 180});
    all_npcs->npc_3 = set_texture_npc("texture/npc/blue.png",
        (sfVector2f){1000, 680}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 230, 190});
    all_npcs->npc_5 = set_texture_npc("texture/npc/orange.png",
        (sfVector2f){800, 150}, (sfVector2f){0.8, 0.8},
        (sfIntRect){0, 0, 80, 80});
    all_npcs->npc_7 = set_texture_npc("texture/npc/purple.png",
        (sfVector2f){450, 480}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 200, 220});
    all_npcs->npc_2 = set_texture_npc("texture/npc/purple.png",
        (sfVector2f){1100, 400}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 200, 220});
    all_npcs->traductor = set_texture_npc("texture/npc/traductor.png",
        (sfVector2f){800, 400}, (sfVector2f){0.7, 0.7},
        (sfIntRect){0, 0, 110, 170});
}

all_npc_t *init_npc(s_game *rpg)
{
    all_npc_t *all_npcs = malloc(sizeof(all_npc_t));

    set_texture_all_npc(all_npcs);
    all_npcs->traductor->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    set_npcs_text(all_npcs);
    return (all_npcs);
}
