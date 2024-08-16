/*
** EPITECH PROJECT, 2023
** buttonfunction
** File description:
** buttonfunction
*/

#include "../include/my_paint.h"


void button_file(sprites_t* sprites)
{
    if (sprites->file_select == 0) {
        sprites->file_select = 1;
        sprites->pencil_state = 0;
        sprites->eraser_state = 0;
        sprites->edit_select = 0;
        sprites->help_select = 0;
    } else {
        sprites->file_select = 0;
    }
}

void button_edit(sprites_t* sprites)
{
    if (sprites->edit_select == 0) {
        sprites->edit_select = 1;
        sprites->pencil_state = 0;
        sprites->eraser_state = 0;
        sprites->file_select = 0;
        sprites->help_select = 0;
    } else {
        sprites->edit_select = 0;
    }
}

void button_help(sprites_t* sprites)
{
    if (sprites->help_select == 0) {
        sprites->help_select = 1;
        sprites->pencil_state = 0;
        sprites->eraser_state = 0;
        sprites->edit_select = 0;
        sprites->file_select = 0;
    } else {
        sprites->help_select = 0;
    }
}

void button_pencil(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    if (sprites->pencil_state == 0) {
        sprites->pencil_state = 1;
        sprites->file_select = 0;
        sprites->edit_select = 0;
        sprites->file_select = 0;
        sprites->eraser_state = 0;
    } else {
        sprites->pencil_state = 0;
    }
}

void button_eraser(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    if (sprites->eraser_state == 0) {
        sprites->eraser_state = 1;
        sprites->pencil_state = 0;
        sprites->file_select = 0;
        sprites->edit_select = 0;
        sprites->file_select = 0;
    } else {
        sprites->eraser_state = 0;
    }
}
