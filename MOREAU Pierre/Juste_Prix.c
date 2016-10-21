#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre, prix, nb_tentatives;
    nb_tentatives=9;
    nombre=0;
    //<- Initialisation du moteur aleatoire ??
    prix=1+(rand()%100);
    while (nombre!=prix) {
        nb_tentatives=nb_tentatives-1;
        printf("Entrer un nombre compris entre 1 et 100 euros\n");
        printf("il vous reste %d tentatives\n",nb_tentatives);
        scanf("%d",&nombre);
        if (nombre<prix){
            printf("votre prix est trop faible\n");
        }
        if (nombre>prix){
            printf("votre prix est trop élevé\n");
        }
        if (nombre==prix){
            printf("Well done, vous avez gagné :");
        }
    }


    return 0;
}
