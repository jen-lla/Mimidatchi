#include <time.h>

void nourrir(int *faim);
void jouer(int *bonheur, int *sommeil);
void dormir(int *sommeil, int *faim);
void temps(int *faim, int *bonheur, int *sommeil, time_t *depart);
void sauvegarder(int faim, int bonheur, int sommeil);
void charger(int *faim, int *bonheur, int *sommeil);