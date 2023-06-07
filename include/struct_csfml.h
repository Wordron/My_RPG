/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** struct_csfml
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#ifndef STRUCT_CSFML_H_
    #define STRUCT_CSFML_H_

    enum array {I, IND, K, NB};

    typedef struct time {
        sfClock *clock;
        sfTime time;
        float seconds;
    } s_time;

    typedef struct sprite_struct_t {
        sfIntRect rect;
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f position;
        sfVector2f scale;
    } s_sprite_struct;


#endif /* !STRUCT_CSFML_H_ */
