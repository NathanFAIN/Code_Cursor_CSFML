/*
** EPITECH PROJECT, 2020
** Code_Button_CSFML
** File description:
** cursor
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

#ifndef CURSOR_H_
#define CURSOR_H_

typedef struct cursor_s cursor_t;

#define NONE 1
#define CLICK 2

struct cursor_s
{
    sfVector2f position;
    sfIntRect rectangle;
    sfSprite *sprite;
    sfTexture *texture;
};

cursor_t create_cursor(sfRenderWindow *window);
cursor_t update_cursor(const sfRenderWindow *window, cursor_t cursor);
void display_cursor(sfRenderWindow *window, const cursor_t cursor);
void destroy_cursor(cursor_t cursor);

#endif /* !CURSOR_H_ */
