/*
** EPITECH PROJECT, 2023
** string2.c
** File description:
** string2
*/

#include "../include/my_paint.h"
void tam_array2(sprites_t* sprites)
{
    int size = sprites->tammax2 + 1;
    char* arr = (char*) malloc(sizeof(char) * size);
    for (int i = 0; i < sprites->tammax2; i++) {
        arr[i] = sprites->input_text2[i];
    }
    free(sprites->input_text2);
    sprites->input_text2 = arr;
    sprites->tammax2 = size;
}

void small_function1(char n, sprites_t* sprites)
{
    if (n == '\b' && sprites->num2 > 0) {
        sprites->input_text2[sprites->num2 - 1] = '\0'; sprites->num2--;
    } else {
        small_function2(sprites);
        sprites->input_text2[sprites->num2] = n; sprites->num2++;
    }
}

void small_function2(sprites_t* sprites)
{
    if (sprites->num == sprites->tammax) {
        tam_array2(sprites);
    }
}

void is_text_written2(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    if (event.type == sfEvtTextEntered && sprites->saveimage_select2 == 1) {
        if (event.text.unicode < 128 && event.text.unicode != 13) {
            char n = event.text.unicode;
            small_function1(n, sprites);
            sfText_setString(sprites->savefiletext, sprites->input_text2);
        }
        if (event.text.unicode == 13) {
            sprites->saveimage_select2 = 0;
            sprites->input_text2[sprites->num2] = '\0';
            sprites->num2 = 0; sprites->saveimage_select = 1;
        }
    }
}
