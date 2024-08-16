/*
** EPITECH PROJECT, 2023
** font.c
** File description:
** font
*/

#include "../include/my_paint.h"

void set_font1(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfText_setString(sp->file, "file");
    sfText_setString(sp->edit, "edit");
    sfText_setString(sp->help, "help");
    sfText_setString(sp->new_file, "new file");
    sfText_setString(sp->open_file, "open file");
    sfText_setString(sp->save_file, "save file");
    sfText_setString(sp->select_pencil, "select pencil");
    sfText_setString(sp->select_eraser, "select eraser");
    sfText_setString(sp->about, "about");
    sfText_setString(sp->help_txt, "help");
    sfText_setString(sp->ventana, "Write the name of the file to open: ");
    sfText_setString(sp->x, "x");
    sfText_setString(sp->ventana2, "Write the name of the file to save: ");
    setfont2(window, event, sp);
}

void setfont2(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfText_setFont(sprites->file, sprites->font);
    sfText_setFont(sprites->edit, sprites->font);
    sfText_setFont(sprites->help, sprites->font);
    sfText_setFont(sprites->new_file, sprites->font);
    sfText_setFont(sprites->open_file, sprites->font);
    sfText_setFont(sprites->save_file, sprites->font);
    sfText_setFont(sprites->about, sprites->font);
    sfText_setFont(sprites->help_txt, sprites->font);
    sfText_setFont(sprites->select_pencil, sprites->font);
    sfText_setFont(sprites->select_eraser, sprites->font);
    sfText_setFont(sprites->ventana, sprites->font);
    sfText_setFont(sprites->ventana2, sprites->font);
    sfText_setFont(sprites->x, sprites->font);
    sfText_setFont(sprites->openfiletext, sprites->font);
    sfText_setFont(sprites->savefiletext, sprites->font);
}
