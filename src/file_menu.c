/*
** EPITECH PROJECT, 2023
** filemenu.c
** File description:
** filemenu
*/

#include "../include/my_paint.h"

void file_menu(sfRenderWindow *window, sfEvent evt, sprites_t* sp, int pos)
{
    if (sp->file_select == 0) {
        return;
    }
    sp->file_select = 0;
    if (pos == 6) {
        new_file(window, evt, sp);
    }
    if (pos == 7) {
        sp->openfile_select = 1;
    }
    if (pos == 8) {
        sp->saveimage_select2 = 1;
    }
}

void new_file(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfRenderTexture_clear(sprites->texture, sfWhite);
}

void open_file(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfTexture* texture = sfTexture_createFromFile(sprites->input_text, NULL);
    sfSprite* sprite = malloc(sizeof(sfSprite*));
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderTexture_drawSprite(sprites->texture, sprite, NULL);
    sprites->openfile_select = 0;
}
