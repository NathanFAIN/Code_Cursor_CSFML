/*
** EPITECH PROJECT, 2020
** Code_CSFML
** File description:
** cursor
*/

//----------------------------------------------------------------------------
// Voici le fichier ou se trouve les fonctions que tu devras coder.
// Il y a 4 fonctions à faire, bonne chance!
// (N'hésites pas à poser des questions si quelque chose n'est pas clair)
//----------------------------------------------------------------------------

#include "cursor.h"

/*
Initialises la structure cursor_t.
Composantes à initialiser :
- position (de base x = 0 et y = 0)
- rectangle (de base height = 50 et width = 50)
- sprite (utilise la fonction sfSprite_create)
- texture (utilise la fonction sfTexture_createFromFile)
Autre fonctions utiles : sfSprite_setTexture, sfSprite_setPosition et sfSprite_setTextureRect.
*/
cursor_t create_cursor(sfRenderWindow *window)
{
    cursor_t cursor = {0};

    return (cursor);
}

/*
Mets à jour la position du sprite à l'aide de la position du curseur : sfMouse_getPositionRenderWindow.
Si le clique gauche est activé, changer le rectangle (left = 50) et met à jour de sprite à l'aide de 
la fonction sfSprite_setTextureRect et sfSprite_setPosition.
*/
cursor_t update_cursor(const sfRenderWindow *window, cursor_t cursor)
{
    return (cursor);
}

/*
Affiches sur l'écran le sprite.
(utilise la fonction sfRenderWindow_drawSprite)
*/
void display_cursor(sfRenderWindow *window, const cursor_t cursor)
{

}

/*
Tu dois détruire la texture et le sprite de la structure.
(utilise la fonction sfTexture_destroy, sfSprite_destroy et sfClock_destroy)
*/
void destroy_cursor(cursor_t cursor)
{

}