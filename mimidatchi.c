#include <stdio.h>
#include "mimidatchi.h"

int menu_accueil(void)
{
    int choix;

    printf("╭──────────────────────────────╮\n");
    printf("│                              │\n");
    printf("│        ♡ MIMIDATCHI ♡        │\n");
    printf("│                              │\n");
    printf("│          / \\_/ \\             │\n");
    printf("│         (˶ᵔ ᵕ ᵔ˶)            │\n");
    printf("│          >     <             │\n");
    printf("│                              │\n");
    printf("│      ⋆｡˚୨ 𝑴𝒊𝒎𝒊 ୧˚｡⋆          │\n");
    printf("│                              │\n");
    printf("│       [1] Jouer              │\n");
    printf("│       [2] Quitter            │\n");
    printf("│                              │\n");
    printf("╰──────────────────────────────╯\n");

    scanf("%d", &choix);

    return choix;
}

void afficher_coeurs(int valeur)
{
    int i;

    i = 0;
    while (i < valeur)
    {
        printf("♥ ");
        i++;
    }
    while (i < 5)
    {
        printf("♡ ");
        i++;
    }
}

void afficher_mimi(int faim, int bonheur, int sommeil)
{
    printf("⏔⏔⏔⏔⏔ ꒰ ᧔ෆ᧓ ꒱ ⏔⏔⏔⏔\n");
    printf("║♡⸝⸝ MIMIDATCHI ⸝⸝♡║\n");
    printf("⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔\n");

    printf("    / \\_/ \\\\\n");
    printf("    (˶ᵔ ᵕ ᵔ˶)\n");
    printf("    >       <\n");

    printf("  ⋆｡˚୨ 𝑴𝒊𝒎𝒊 ୧˚｡⋆\n");

    printf("⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔\n");
    printf("║ Faim    : ");
    afficher_coeurs(faim);
    printf(" %d/5 ║\n", faim);

    printf("║ Bonheur : ");
    afficher_coeurs(bonheur);
    printf(" %d/5 ║\n", bonheur);

    printf("║ Sommeil : ");
    afficher_coeurs(sommeil);
    printf(" %d/5 ║\n", sommeil);
    printf("⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔\n");
    printf("║ [1] 🍓 Nourrir           ║\n");
    printf("║ [2] 🪁 Jouer             ║\n");
    printf("║ [3] 💤 Dormir            ║\n");
    printf("║ [4] ❌ Ne rien faire     ║\n");
    printf("║ [5] 🚪 Quitter           ║\n");
    printf("⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔⏔\n");

    if (faim == 0)
        {
            printf("Mimi est affamé. (╥﹏╥)\n");
        }
        if(bonheur == 0)
        {
            printf("Mimi est en sanglot. (╥﹏╥)\n");
        }
        if (sommeil == 0)
        {
            printf("Mimi est épuisé. (╥﹏╥)\n");
        }
        if (faim == 5)
        {
            printf("Mimi est rassasié. (¬‿¬)\n");
        }
        if (bonheur == 5)
        {
            printf("Mimi est content. ⸜(｡˃ ᵕ ˂ )⸝♡\n");
        }
        if (sommeil == 5)
        {
            printf("Mimi a bien dormi. ₍˶ᵔ ᵕ ᵔ˶ ₎\n");
        }
}
