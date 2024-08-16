/*
** EPITECH PROJECT, 2023
** button_function.c
** File description:
** buttonfunction
*/

#include "../include/my_paint.h"


void button_defaultpencil(sprites_t* sprites)
{
    if (sprites->small_select == 0 && sprites->pencil_state == 1) {
        sprites->radius = 5;
        sprites->small_select = 1;
        sprites->medium_select = 0;
        sprites->big_select = 0;
    }
}

void button_mediumpencil(sprites_t* sprites)
{
    if (sprites->medium_select == 0) {
        sprites->radius = 10;
        sprites->medium_select = 1;
        sprites->small_select = 0;
        sprites->big_select = 0;
    } else {
        sprites->medium_select = 0;
        sprites->small_select = 1;
        sprites->radius = 5;
    }
}

void button_bigpencil(sprites_t* sprites)
{
    if (sprites->big_select == 0) {
        sprites->radius = 15;
        sprites->big_select = 1;
        sprites->medium_select = 0;
        sprites->small_select = 0;
    } else {
        sprites->big_select = 0;
        sprites->small_select = 1;
        sprites->radius = 5;
    }
}

void button_erasercircle(sprites_t* sprites)
{
    if (sprites->eraser_circle == 0) {
        sprites->eraser_circle = 1;
        sprites->eraser_rect = 0;
    }
}

void button_eraserrect(sprites_t* sprites)
{
    if (sprites->eraser_rect == 0) {
        sprites->eraser_circle = 0;
        sprites->eraser_rect = 1;
    }
}
