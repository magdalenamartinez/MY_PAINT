/*
** EPITECH PROJECT, 2023
** array2
** File description:
** array2
*/

#include "../include/my_paint.h"

int any_button6(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->help_select;
    while (i < 13 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return (any_button7(array, 13, sprites));
    }
}

int any_button7(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->pencil_state;
    while (i < 16 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return any_button8(array, 16, sprites);
    }
}

int any_button8(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = 0;
    while (i < 18 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return (any_button9(array, 18, sprites));
    }
}

int any_button9(int** array, int i, sprites_t* sp)
{
    int a = sp->mouse.x; int b = sp->mouse.y;
    int x = sp->openfile_select;
    int x2 = sp->saveimage_select2;
    while (i < 19 && (sp->f1 == 0 || sp->f2 == 0) && (x == 1 || x2 == 1)) {
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
        return any_button10(array, 19, sp);
    }
}

int any_button10(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->pencil_state;
    while (i < 27 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return any_button11(array, 27, sprites);
    }
}
