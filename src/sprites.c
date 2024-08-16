/*
** EPITECH PROJECT, 2023
** sprites.c
** File description:
** sprites
*/

#include "../include/my_paint.h"
sprites_t* init_sprites(void)
{
    sfVector2f position = {0, 0};
    sfVector2f size = {0, 0};
    sprites_t* sprites = malloc(sizeof(sprites_t));
    return sprites;
}

void create_sprites(sfRenderWindow *window, sfEvent event)
{
    sprites_t* sprites = init_sprites();
    memory_alloc(window, event, sprites);
    create_buttons(window, event, sprites);
    create_text(window, event, sprites);
    create_images(window, event, sprites);
    sprites->texture = sfRenderTexture_create(1914, 945, sfFalse);
    bucle(window, event, sprites);
}

void memory_alloc(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sprites->font = malloc(sizeof(sfFont*));
    sprites->file = malloc(sizeof(sfText*));
    sprites->edit = malloc(sizeof(sfText*));
    sprites->help = malloc(sizeof(sfText*));
    sprites->new_file = malloc(sizeof(sfText*));
    sprites->open_file = malloc(sizeof(sfText*));
    sprites->save_file = malloc(sizeof(sfText*));
    sprites->select_pencil = malloc(sizeof(sfText*));
    sprites->select_eraser = malloc(sizeof(sfText*));
    sprites->about = malloc(sizeof(sfText*));
    sprites->help_txt = malloc(sizeof(sfText*));
    sprites->pencil = malloc(sizeof(sfSprite*));
    sprites->eraser = malloc(sizeof(sfSprite*));
    sprites->texture = malloc(sizeof(sfRenderTexture*));
    sprites->aux = malloc(sizeof(sfSprite*));
    sprites->savefiletext = malloc(sizeof(sfText*));
    sprites->ventana = malloc(sizeof(sfText*));
    sprites->ventana2 = malloc(sizeof(sfText*));
    sprites->x = malloc(sizeof(sfText*));
    sprites->openfiletext = malloc(sizeof(sfText*));
}

sfSprite* crea(sfTexture * texture)
{
    sfSprite* sprite_aux = sfSprite_create();
    sfSprite_setTexture(sprite_aux, texture, sfTrue);
    return sprite_aux;
}
