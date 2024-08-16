/*
** EPITECH PROJECT, 2023
** images.c
** File description:
** images
*/

#include "../include/my_paint.h"

void create_images(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfVector2f posPencil = {875, 25};
    sfVector2f posEraser = {950, 25};
    sfVector2f sizePencil = {0.1, 0.1};
    sprites->pencil = crea(sfTexture_createFromFile("./c/lapiz.png", NULL));
    sprites->eraser = crea(sfTexture_createFromFile("./c/goma.png", NULL));
    sfSprite_setPosition(sprites->pencil, posPencil);
    sfSprite_setPosition(sprites->eraser, posEraser);
    sfSprite_setScale(sprites->pencil, sizePencil);
    sfSprite_setScale(sprites->eraser, sizePencil);
}

void save_image(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    if (sprites->saveimage_select == 1) {
        sfImage* image;
        const sfTexture* tex = sfRenderTexture_getTexture(sprites->texture);
        image = sfTexture_copyToImage(tex);
        int a = sfImage_saveToFile(image, sprites->input_text2);
        sfImage_destroy(image);
        sprites->saveimage_select = 0;
    }
}
