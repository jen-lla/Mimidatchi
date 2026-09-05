#include <stdio.h>
#include <time.h>
#include "actions.h"
#include "mimidatchi.h"
#include <stdlib.h>

int main(void)
{
    int choix_accueil;

    choix_accueil = menu_accueil();

    if (choix_accueil == 2)
    return (0);

    int faim = 3;
    int bonheur = 5;
    int sommeil = 4;
    int choix = 0;

    charger(&faim, &bonheur, &sommeil);

    time_t depart = time(NULL);
    
    while (choix != 5)
    {
        system("clear");
        afficher_mimi(faim, bonheur, sommeil);
        
        scanf("%d", &choix);
        
        if (choix == 1)
        {
            nourrir(&faim);
        }
        else if (choix == 2)
        {
            jouer(&bonheur, &sommeil);
        }
        else if (choix == 3)
        {
            dormir(&sommeil, &faim);
        }
        else if (choix == 4)
        {
        printf("Mimi ne fait rien. (¬`‸´¬)\n");
        }   
        else if (choix == 5)
        {
        sauvegarder(faim, bonheur, sommeil);
        printf("Bye Bye!\n");
        }
        else
        {
        printf("Choix invalide.\n");
        }
        temps(&faim, &bonheur, &sommeil, &depart);
        
        if (faim == 0 && bonheur == 0 && sommeil == 0)
        {
            printf("Mimi est mort. (╥﹏╥)\n");
            break;
        }
    }
        return (0);
} 