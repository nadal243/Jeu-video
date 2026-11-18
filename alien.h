#ifndef __constante__
#define __constante__



typedef struct
{
    int x;
    int y;
    int couleur;
    int compteur; 
    t_sprite *sprite;

} t_alien;

void deplaceAlien(t_alien *alien); 
void afficheAlien(t_alien *alien); 


#endif 