/*
** EPITECH PROJECT, 2023
** string.c
** File description:
** string
*/

#include "../include/my_paint.h"

void part_1(char c, sprites_t* sprites)
{
    if (c == '\b' && sprites->num > 0) {
        sprites->input_text[sprites->num - 1] = '\0'; sprites->num--;
    } else {
        part_2(sprites);
        sprites->input_text[sprites->num] = c; sprites->num++;
    }
}

void part_2(sprites_t* sprites)
{
    if (sprites->num == sprites->tammax) {
        tam_array(sprites);
    }
}

void is_text_written(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    if (event.type == sfEvtTextEntered && sprites->openfile_select == 1) {
        if (event.text.unicode < 128 && event.text.unicode != 13) {
            char c = event.text.unicode;
            part_1(c, sprites);
            sfText_setString(sprites->openfiletext, sprites->input_text);
        }
        if (event.text.unicode == 13) {
            sprites->input_text[sprites->num] = '\0';
            sprites->num = 0; open_file(window, event, sprites);
        }
    }
}

void tam_array(sprites_t* sprites)
{
    int size = sprites->tammax + 1;
    char* arr = (char*) malloc(sizeof(char) * size);
    for (int i = 0; i < sprites->tammax; i++) {
        arr[i] = sprites->input_text[i];
    }
    free(sprites->input_text);
    sprites->input_text = arr;
    sprites->tammax = size;
}
