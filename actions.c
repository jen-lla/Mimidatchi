#include <unistd.h>
#include <time.h>

void nourrir(int *faim)
{
    if (*faim < 5)
    {
        (*faim)++;
    }
}

void jouer(int *bonheur, int *sommeil)
{
    if (*bonheur < 5)
    {
        (*bonheur)++;
    }
    if (*sommeil > 0)
    {
        (*sommeil)--;
    }
}

void dormir(int *sommeil, int *faim)
{
    if (*sommeil < 5)
    {
        (*sommeil)++;
    }
    if (*faim > 0)
    {
        (*faim)--;
    }
}

void temps(int *faim, int *bonheur, int *sommeil, time_t *depart)
{
    time_t actuel = time(NULL);
    
    if (difftime(actuel, *depart) >= 300)
    {
        if (*faim > 0)
        {
            (*faim)--;
        }
        if (*bonheur > 0)
        {
            (*bonheur)--;
        }
        if (*sommeil > 0)
        {
            (*sommeil)--;
        }
        *depart = actuel;
    }
}

#include <stdio.h>

void sauvegarder(int faim, int bonheur, int sommeil)
{
    FILE *fichier;

    fichier = fopen("save.dat", "w");
    if (fichier == NULL)
        return;

    fprintf(fichier, "%d\n", faim);
    fprintf(fichier, "%d\n", bonheur);
    fprintf(fichier, "%d\n", sommeil);

    fclose(fichier);
}

void charger(int *faim, int *bonheur, int *sommeil)
{
    FILE *fichier;

    fichier = fopen("save.dat", "r");
    if (fichier == NULL)
        return;

    fscanf(fichier, "%d", faim);
    fscanf(fichier, "%d", bonheur);
    fscanf(fichier, "%d", sommeil);

    fclose(fichier);
}