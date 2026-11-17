#include "affichage.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "alien.h"

/* Sprite du vaisseau */
t_sprite vaisseau =
{
    {0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,1,1,1,0,0,0,0},
    {0,0,0,1,1,1,1,1,0,0,0},
    {0,0,1,1,1,1,1,1,1,0,0},
    {0,1,1,1,1,1,1,1,1,1,0},
    {1,1,1,1,1,1,1,1,1,1,1},
    {0,0,0,1,1,0,1,1,0,0,0},
    {0,0,1,1,0,0,0,1,1,0,0}
};

// initialisation des positions et couleurs des aliens

t_alien alien[15]; // Déclaration du tableau d'aliens

void initAliens() {
    for (int i = 0; i < 15; i++) {
        alien[i].x = (i % 5) * 60 + 50;
        alien[i].y = (i / 5) * 60 + 50;
        alien[i].couleur = (i % 3) + 2; // Couleurs différentes pour les aliens (2, 3, 4)
    }
}

int main(void)
{
    int touche = 0; // Variable pour stocker la touche pressée
    int position_x = 180; // Position initiale du vaisseau
    int position_y = 550; // Position initiale du vaisseau

    // Initialisation de l'affichage
    initAffichage(400,600);

    do {
        // calcul de position du vaisseau en fonction de la touche pressée
        switch (touche) {
            case 1: // flèche gauche
                position_x -= 5;
                if (position_x < 0) 
                    position_x = 0; // Limite gauche
                break;
            case 2: // flèche droite
                position_x += 5;
                if (position_x > 400 - SPRITE_X * 4) 
                    position_x = 400 - SPRITE_X * 4; // Limite droite
                break;
            case 3: // touche espace
                // Action pour la touche espace (par exemple, tirer un projectile)
                break;
        }

        // Affichage du vaisseau
        afficheSprite(vaisseau, position_x, position_y, 2);

        // Mise à jour de l'affichage et gestion des événements
        touche = miseAJourAffichage(100);

    }while (touche != -1);

    return 0;
}