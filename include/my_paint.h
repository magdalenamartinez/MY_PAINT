/*
** EPITECH PROJECT, 2022
** MY_PAINT_H_
** File description:
** MY_PAINT_H_
*/

#ifndef MY_PAINT_H_
    #define MY_PAINT_H_
    #define ERROR_EXIT 84
    #include <fcntl.h>
    #include <unistd.h>
    #include "my.h"
    #include <stdio.h>
    #include <string.h>
    #include <signal.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <SFML/Network.h>
    typedef struct button_s {
        sfRectangleShape *rect;
    } button_t;
    typedef struct sprites {
        float radius;
        int boton_actual;
        int** buttons;
        sfRectangleShape* button;
        sfRectangleShape* menu_bar;
        sfRectangleShape* menu_bar2;
        sfRectangleShape* menu_bar3;
        sfRectangleShape* down_menu;
        sfRectangleShape* rect_pencil;
        sfRectangleShape* rect_eraser;
        sfRectangleShape* draw;
        sfRectangleShape* erase;
        sfRectangleShape* file_menu;
        sfRectangleShape* file_menu1;
        sfRectangleShape* file_menu2;
        sfRectangleShape* file_menu3;
        sfCircleShape* circle_eraser1;
        sfCircleShape* circle_eraser2;
        sfCircleShape* circle_eraser;
        sfRectangleShape* rectangle_eraser;
        sfRectangleShape* rectangle_eraser1;
        sfRectangleShape* rectangle_eraser2;
        sfRectangleShape* circleerase;
        sfRectangleShape* circleerase1;
        sfRectangleShape* circleerase2;
        sfRectangleShape* recterase;
        sfRectangleShape* recterase1;
        sfRectangleShape* recterase2;
        sfRenderTexture* texture;
        sfText* new_file;
        sfText* open_file;
        sfText* save_file;
        sfText* ventana;
        sfText* ventana2;
        sfText* x;
        int openfile_select;
        sfRectangleShape* edit_menu;
        sfRectangleShape* edit_menu1;
        sfRectangleShape* edit_menu2;
        sfText* select_pencil;
        sfText* select_eraser;
        sfRectangleShape* help_menu;
        sfRectangleShape* help_menu1;
        sfRectangleShape* help_menu2;
        sfCircleShape* small_pencil;
        sfCircleShape* medium_pencil;
        sfCircleShape* big_pencil;
        sfRectangleShape* small_rect;
        sfRectangleShape* medium_rect;
        sfRectangleShape* big_rect;
        sfText* about;
        sfText* help_txt;
        sfFont* font;
        sfText* file;
        sfText* help;
        sfText* edit;
        sfVector2i mouse;
        sfSprite* pencil;
        sfSprite* eraser;
        int clicked;
        int pencil_state;
        int eraser_state;
        int file_select;
        int help_select;
        int edit_select;
        sfCircleShape** array_draw;
        sfRectangleShape** array_erase;
        int count_pixel;
        int initial_size;
        int about_state;
        int help_state;
        const sfTexture* t;
        int small_select;
        int medium_select;
        int big_select;
        sfSprite* aux;
        sfCircleShape* point;
        int eraser_circle;
        int eraser_rect;
        sfRectangleShape* rectform;
        int f1;
        int f2;
        sfRectangleShape *fondoe;
        sfRectangleShape *close_e;
        sfRectangleShape* white_e;
        char *input_text;
        char *input_text2;
        int num;
        int tammax;
        int tammax2;
        int num2;
        int saveimage_select2;
        sfText* openfiletext;
        sfText* savefiletext;
        int saveimage_select;
        sfRectangleShape* blue;
        sfRectangleShape* yellow;
        sfRectangleShape* red;
        sfRectangleShape* green;
        sfRectangleShape* white;
        sfRectangleShape* black;
        sfRectangleShape* magenta;
        sfRectangleShape* cyan;
        sfRectangleShape* rectblue;
        sfRectangleShape* rectyellow;
        sfRectangleShape* rectred;
        sfRectangleShape* rectgreen;
        sfRectangleShape* rectwhite;
        sfRectangleShape* rectblack;
        sfRectangleShape* rectmagenta;
        sfRectangleShape* rectcyan;
        sfColor color;
        int c;
        float radiuseraser;
        sfVector2f sizeeraser;
        int opt;
    }sprites_t;
    sprites_t* init_sprites(void);
    void choose_rect_eraser(sfRenderWindow* w, sfEvent event, sprites_t* sp);
    void choose_circle_eraser(sfRenderWindow* w, sfEvent event, sprites_t* sp);
    sfRectangleShape* init_button(sfVector2f position, sfVector2f size);
    void button_clicked(sfRenderWindow *w, sfEvent e, sprites_t* sp, int** a);
    void close_event(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void draw(sfRenderWindow * window, sfEvent event, sprites_t* sprites);
    void file_menu(sfRenderWindow *w, sfEvent evt, sprites_t* sp, int pos);
    void create_window(void);
    void bucle(sfRenderWindow* window, sfEvent event, sprites_t* sprites);
    void initialise_values(sprites_t* sprites);
    void close_event(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void button_defaultpencil(sprites_t* sprites);
    void button_mediumpencil(sprites_t* sprites);
    void button_bigpencil(sprites_t* sprites);
    void button_erasercircle(sprites_t* sprites);
    void button_eraserrect(sprites_t* sprites);
    void button_file(sprites_t* sprites);
    void button_edit(sprites_t* sprites);
    void button_help(sprites_t* sprites);
    void button_eraser(sfRenderWindow* window, sfEvent event, sprites_t* sprites);
    void button_pencil(sfRenderWindow* window, sfEvent event, sprites_t* sprites);
    sfRectangleShape* init_button(sfVector2f position, sfVector2f size);
    sfCircleShape* init_circle(sfVector2f position, float radius);
    void create_buttons(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons2(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons3(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons4(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons5(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons6(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons7(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    void create_buttons8(sfRenderWindow *window, sfEvent event, sprites_t* sprites);
    
    int any_button(sprites_t* sprites, int** array);
    int any_button2(int** array, int i, sprites_t* sp);
    int any_button3(int** array, int i, sprites_t* sp);
    int any_button4(int** array, int i, sprites_t* sp);
    int any_button5(int** array, int i, sprites_t* sp);
    int any_button6(int** array, int i, sprites_t* sp);
    int any_button7(int** array, int i, sprites_t* sp);
    int any_button8(int** array, int i, sprites_t* sp);
    int any_button9(int** array, int i, sprites_t* sp);
    int any_button10(int** array, int i, sprites_t* sp);
    int any_button11(int** array, int i, sprites_t* sp);
    int any_button12(int** array, int i, sprites_t* sp);
    void button_posinitial(int ** array);
    void button_pos1(int **array);
    void button_pos2(int** array);
    void button_pos3(int** array);
    void button_pos4(int** array);
    void button_pos5(int** array);
    void button_pos6(int** array);
    void button_pos7(int** array);

    #define MAX_BUFFER 2000000
#endif /*MY_PAINT_H_*/
