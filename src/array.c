/*
** EPITECH PROJECT, 2023
** array.c
** File description:
** array
*/

#include "../include/my_paint.h"

int any_button(sprites_t* sprites, int** array)
{
    int i = 0; int a = sprites->mouse.x; int b = sprites->mouse.y;
    sprites->f1 = 0; sprites->f2 = 0;
    while (i < 3 && (sprites->f1 == 0 || sprites->f2 == 0)) {
        sprites->f1 = 0; sprites->f2 = 0;
        if (a >= array[i][0] && a < array[i][2]) {
            sprites->f1 = 1;
        }
        if (b >= array[i][1] && b < array[i][3]) {
            sprites->f2 = 1;
        }
        i++;
    }
    if (sprites->f1 == 1 && sprites->f2 == 1) {
        return i;
    } else {
        return (any_button2(array, 3, sprites));
    }
}

int any_button2(int** array, int i, sprites_t* sp)
{
    int a = sp->mouse.x; int b = sp->mouse.y;
    int x = sp->pencil_state;
    int x2 = sp->eraser_state;
    while (i < 4 && (sp->f1 == 0 || sp->f2 == 0) && (x == 1 || x2 == 1)) {
        sp->f1 = 0; sp->f2 = 0;
        if (a >= array[i][0] && a < array[i][2]) {
            sp->f1 = 1;
        }
        if (b >= array[i][1] && b < array[i][3]) {
            sp->f2 = 1;
        }
        i++;
    }
    if (sp->f1 == 1 && sp->f2 == 1) {
        return i;
    } else {
        return (any_button3(array, 4, sp));
    }
}

int any_button3(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    while (i < 6 && (sprites->f1 == 0 || sprites->f2 == 0) ) {
        sprites->f1 = 0; sprites->f2 = 0;
        if (a >= array[i][0] && a < array[i][2]) {
            sprites->f1 = 1;
        }
        if (b < array[i][1] && b >= array[i][3]) {
            sprites->f2 = 1;
        }
        i++;
    }
    if (sprites->f1 == 1 && sprites->f2 == 1) {
        return i;
    } else {
        return (any_button4(array, 6, sprites));
    }
}

int any_button4(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->file_select;
    while (i < 9 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
        sprites->f1 = 0; sprites->f2 = 0;
        if (a >= array[i][0] && a < array[i][2]) {
            sprites->f1 = 1;
        }
        if (b >= array[i][1] && b < array[i][3]) {
            sprites->f2 = 1;
        }
        i++;
    }
    if (sprites->f1 == 1 && sprites->f2 == 1) {
        return i;
    } else {
        return (any_button5(array, 9, sprites));
    }
}

int any_button5(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->edit_select;
    while (i < 11 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
        sprites->f1 = 0; sprites->f2 = 0;
        if (a >= array[i][0] && a < array[i][2]) {
            sprites->f1 = 1;
        }
        if (b >= array[i][1] && b < array[i][3]) {
            sprites->f2 = 1;
        }
        i++;
    }
    if (sprites->f1 == 1 && sprites->f2 == 1) {
        return i;
    } else {
        return (any_button6(array, 11, sprites));
    }
}
