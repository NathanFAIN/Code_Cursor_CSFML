/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** main
*/

#include "cursor.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>

//--------------Creation-de-la-fenettre--------------
sfRenderWindow *create_window()
{
    sfRenderWindow *new_window;
    sfVideoMode video_mode;

    video_mode.bitsPerPixel = 32;
    video_mode.width = 1920;
    video_mode.height = 1080;
    new_window = sfRenderWindow_create(video_mode, "~", sfClose, NULL);
    if (new_window == NULL)
        return (NULL);
    sfRenderWindow_setPosition(new_window, (sfVector2i){0, 0});
    sfRenderWindow_setFramerateLimit(new_window, 60);
    return (new_window);
}

//--------------Récupération-des-évènements--------------
void basic_event_window(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
    }
}

int main(void)
{
    sfRenderWindow *window = create_window();
    cursor_t cursor = create_cursor(window);
    if (window == NULL)
        return (84);
    while (sfRenderWindow_isOpen(window)) {
        basic_event_window(window);
        cursor = update_cursor(window, cursor);
        sfRenderWindow_clear(window, sfBlack);
        display_cursor(window, cursor);
        sfRenderWindow_display(window);
    }
    destroy_cursor(cursor);
    sfRenderWindow_destroy(window);
    return (0);
}