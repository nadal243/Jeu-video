#include "affichage.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "alien.h"

void deplaceAlien(t_alien *alien)
{
    // gauche 
    if(alien->compteur < 25)
    {
        alien->x -= 5;
    }
    // droite
    else
    {
        alien->x += 5;
    }
    // alien descend
    
    alien->compteur = (alien->compteur + 1) % 50;

    if(alien->compteur == 0)
    {
        alien->y += 10;
    }
}