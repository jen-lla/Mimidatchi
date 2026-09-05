# 🐱 Mimidatchi
<img width="366" height="314" alt="image" src="https://github.com/user-attachments/assets/e20e37a9-58c6-423c-aefd-aa3711f2bee5" />
<img width="365" height="461" alt="interface" src="https://github.com/user-attachments/assets/70b6c22a-26fc-4f6b-8de6-7990aa2a5b8a" />

> Un petit jeu de terminal inspiré des Tamagotchi, développé en langage C 💗

## À propos

Prenez soin de Mimi le petit chat en gérant trois statistiques :

- 🍓 Faim
- 💗 Bonheur
- 💤 Sommeil

Les actions du joueur modifient les statistiques de Mimi et celles-ci diminuent également avec le temps.
Ne laissez pas Mimi seul trop longtemps !!

## Fonctionnalités

- 🐣 Interface interactive dans le terminal
- 🍓 Nourrir Mimi
- 🪁 Jouer avec Mimi
- 💤 Faire dormir Mimi
- ⏰ Les statistiques diminuent avec le temps
- 💾 Système de sauvegarde
- 🌙 Les statistiques diminuent même lorsque le jeu est fermé
- ☠️ Mimi peut mourir si toutes ses statistiques atteignent 0

## Outils & langages
- C
- GCC
- Linux / WSL

## Comment jouer ?

1. Cloner le projet :

```bash
git clone https://github.com/jen-lla/Mimidatchi.git
cd Mimidatchi
```
2. Lancer le jeu

Bash :
```bash
cc main.c actions.c mimidatchi.c -o mimidatchi
./mimidatchi
```
Une version Windows sera bientôt disponible.
PowerShell :

.\Mimidatchi.exe
