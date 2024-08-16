/*
** EPITECH PROJECT, 2023
** main
** File description:
**  main.c
*/

#include "../include/my_paint.h"

int main(int argc, char **argv)
{
    create_window();
}

void create_window(void)
{
    sfRenderWindow* window;
    sfVideoMode mode = {1920, 1080, 32};
    window = sfRenderWindow_create(mode, "My_Paint", sfResize | sfClose, NULL);
    if (!window) {
        return EXIT_FAILURE;
    } else {
        sfEvent event;
        create_sprites(window, event);
    }
}

void initialise_values(sprites_t* sprites)
{
    sprites->radius = 5;
    sprites->color = sfBlack;
    sprites->small_select = 1;
    sprites->eraser_state = 0;
    sprites->pencil_state = 0;
    sprites->eraser_circle = 1;
    sprites->radiuseraser = 15;
    sprites->sizeeraser.x = 15; sprites->sizeeraser.y = 15;
    sprites->opt = 0;
    sprites->num = 0;
    sprites->num2 = 0;
    sprites->tammax = 1; sprites->c = 5;
    sprites->tammax2 = 1;
    sprites->input_text2 = malloc(sizeof(char)* sprites->tammax2);
    sprites->input_text = malloc(sizeof(char)* sprites->tammax);
    sprites->t = sfRenderTexture_getTexture(sprites->texture);
    sfSprite_setTexture(sprites->aux, sprites->t, sfTrue);
    sfRenderTexture_clear(sprites->texture, sfWhite);
}

void bucle(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    int** buttons_positions = button_pos(window, event, sprites);
    initialise_values(sprites);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            close_event(window, event, sprites);
            button_clicked(window, event, sprites, buttons_positions);
            is_text_written(window, event, sprites);
            is_text_written2(window, event, sprites);
            save_image(window, event, sprites);
        }
        sfRenderTexture_display(sprites->texture);
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_drawSprite(window, sprites->aux, NULL);
        make_draw(window, event, sprites);
        sfRenderWindow_display(window);
        }
}

void close_event(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
}
