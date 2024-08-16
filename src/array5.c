/*
** EPITECH PROJECT, 2023
** array5
** File description:
** array5
*/

#include "../include/my_paint.h"

int any_button11(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->eraser_state;
    while (i < 30 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return any_button12(array, 30, sprites);;
    }
}

int any_button12(int** array, int i, sprites_t* sprites)
{
    int a = sprites->mouse.x; int b = sprites->mouse.y;
    int x = sprites->eraser_state;
    while (i < 33 && (sprites->f1 == 0 || sprites->f2 == 0) && x == 1) {
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
        return -1;
    }
}
