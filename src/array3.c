/*
** EPITECH PROJECT, 2023
** array3.c
** File description:
** array3
*/

#include "../include/my_paint.h"

void button_pos1(int **array)
{
    array[3][0] = 2;
    array[3][1] = 85;
    array[3][2] = 1916;
    array[3][3] = 1025;
    array[4][0] = 878;
    array[4][1] = 74;
    array[4][2] = 925;
    array[4][3] = 38;
    array[5][0] = 954;
    array[5][1] = 62;
    array[5][2] = 995;
    array[5][3] = 48;
    array[6][0] = 4;
    array[6][1] = 24;
    array[6][2] = 150;
    array[6][3] = 52;
    array[7][0] = 4;
    array[7][1] = 61;
    array[7][2] = 150;
    array[7][3] = 84;
}

void button_pos2(int** array)
{
    array[8][0] = 4;
    array[8][1] = 94;
    array[8][2] = 150;
    array[8][3] = 121;
    array[9][0] = 46;
    array[9][1] = 25;
    array[9][2] = 189;
    array[9][3] = 68;
    array[10][0] = 46;
    array[10][1] = 79;
    array[10][2] = 189;
    array[10][3] = 122;
    array[11][0] = 88;
    array[11][1] = 24;
    array[11][2] = 229;
    array[11][3] = 68;
    array[12][0] = 88;
    array[12][1] = 80;
    array[12][2] = 229;
    array[12][3] = 120;
}

void button_posinitial(int ** array)
{
    array[0][0] = 3;
    array[0][1] = 4;
    array[0][2] = 39;
    array[0][3] = 16;
    array[1][0] = 47;
    array[1][1] = 4;
    array[1][2] = 82;
    array[1][3] = 18;
    array[2][0] = 89;
    array[2][1] = 4;
    array[2][2] = 126;
    array[2][3] = 17;
}

int** button_pos(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    int **array = malloc(sizeof(int*) * 33);
    for (int i = 0; i < 33; i++) {
        array[i] = malloc(sizeof(int) * 4);
    }
    button_posinitial(array);
    button_pos1(array);
    button_pos2(array);
    button_pos3(array);
    button_pos4(array);
    button_pos5(array);
    button_pos6(array);
    button_pos7(array);
    return array;
}
