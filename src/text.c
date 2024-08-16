/*
** EPITECH PROJECT, 2023
** text.c
** File description:
** text
*/

#include "../include/my_paint.h"

void set_color_text(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfText_setFillColor(sprites->file, sfBlack);
    sfText_setFillColor(sprites->edit, sfBlack);
    sfText_setFillColor(sprites->help, sfBlack);
    sfText_setFillColor(sprites->new_file, sfBlack);
    sfText_setFillColor(sprites->open_file, sfBlack);
    sfText_setFillColor(sprites->save_file, sfBlack);
    sfText_setFillColor(sprites->select_pencil, sfBlack);
    sfText_setFillColor(sprites->select_eraser, sfBlack);
    sfText_setFillColor(sprites->about, sfBlack);
    sfText_setFillColor(sprites->help_txt, sfBlack);
    sfText_setFillColor(sprites->ventana, sfBlack);
    sfText_setFillColor(sprites->ventana2, sfBlack);
    sfText_setFillColor(sprites->x, sfBlack);
    sfText_setFillColor(sprites->openfiletext, sfBlack);
    sfText_setFillColor(sprites->savefiletext, sfBlack);
}

void set_position_text(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfVector2f PosFile = {10,1};
    sfVector2f PosFile1 = {10,27};
    sfVector2f PosFile2 = {10,59};
    sfVector2f PosFile3 = {10,94};
    sfVector2f pos_ventana = {476, 370};
    sfVector2f pos_ventana2 = {483, 450};
    sfVector2f pos_x = {1427, 340};
    sfText_setPosition(sp->file, PosFile);
    sfText_setPosition(sp->new_file, PosFile1);
    sfText_setPosition(sp->open_file, PosFile2);
    sfText_setPosition(sp->save_file, PosFile3);
    sfText_setPosition(sp->ventana, pos_ventana);
    sfText_setPosition(sp->ventana2, pos_ventana);
    sfText_setPosition(sp->x, pos_x);
    sfText_setPosition(sp->openfiletext, pos_ventana2);
    sfText_setPosition(sp->savefiletext, pos_ventana2);
    set_position_text2(window, event, sp);
}

void set_position_text2(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfVector2f PosEdit = {50,1};
    sfVector2f PosEdit1 = {50,34};
    sfVector2f PosEdit2 = {50,85};
    sfText_setPosition(sp->edit, PosEdit);
    sfText_setPosition(sp->select_eraser, PosEdit2);
    sfText_setPosition(sp->select_pencil, PosEdit1);
    sfVector2f PosHelp = {90, 1};
    sfVector2f PosHelp1 = {90, 34};
    sfVector2f PosHelp2 = {90, 85};
    sfText_setPosition(sp->help, PosHelp);
    sfText_setPosition(sp->about, PosHelp1);
    sfText_setPosition(sp->help_txt, PosHelp2);
}

void set_scale_text(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfVector2f SizeFile = {0.55, 0.55};
    sfVector2f SizeVentana = {0.70, 0.70};
    sfVector2f SizeX = {1.2, 1.2};
    sfText_setScale(sprites->file, SizeFile);
    sfText_setScale(sprites->help, SizeFile);
    sfText_setScale(sprites->edit, SizeFile);
    sfText_setScale(sprites->new_file, SizeFile);
    sfText_setScale(sprites->open_file, SizeFile);
    sfText_setScale(sprites->save_file, SizeFile);
    sfText_setScale(sprites->select_pencil, SizeFile);
    sfText_setScale(sprites->select_eraser, SizeFile);
    sfText_setScale(sprites->about, SizeFile);
    sfText_setScale(sprites->help_txt, SizeFile);
    sfText_setScale(sprites->ventana, SizeVentana);
    sfText_setScale(sprites->ventana2, SizeVentana);
    sfText_setScale(sprites->x, SizeX);
    sfText_setScale(sprites->openfiletext, SizeVentana);
    sfText_setScale(sprites->savefiletext, SizeVentana);
}

void create_text(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sprites->font = sfFont_createFromFile("./c/arial.ttf");
    sprites->file = sfText_create();
    sprites->edit = sfText_create();
    sprites->help = sfText_create();
    sprites->new_file = sfText_create();
    sprites->open_file = sfText_create();
    sprites->save_file = sfText_create();
    sprites->select_pencil = sfText_create();
    sprites->select_eraser = sfText_create();
    sprites->about = sfText_create();
    sprites->help_txt = sfText_create();
    sprites->ventana = sfText_create();
    sprites->ventana2 = sfText_create();
    sprites->x = sfText_create();
    sprites->openfiletext = sfText_create();
    sprites->savefiletext = sfText_create();
    set_font1(window, event, sprites);
    set_color_text(window, event, sprites);
    set_position_text(window, event, sprites);
    set_scale_text(window, event, sprites);
}
