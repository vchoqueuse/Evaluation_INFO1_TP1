#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int aleatoire,nbsaisie,tentative=8,continuer=1; //attention, dans ta solution, il faut initialiser nbsaisie pour eviter que ton programme court-circuite ta premiere boucle.
    srand(time(NULL));                              //bien
    aleatoire=1+rand()%100;                         // -> mal placé
    while(continuer==1){                            //bien
        while(tentative>0 && aleatoire!=nbsaisie){  //voir la remarque sur l'initialisation

            printf("\n\nIl vous reste %d tentatives \n",tentative);
            printf("Entrer un nombre compris entre 1 et 100  ");
            scanf("%d",&nbsaisie);
            if(aleatoire>nbsaisie){
                printf("Votre prix est trop faible\n");
                tentative=tentative-1;              //a sortir de tes if
            }
            if(aleatoire<nbsaisie){
                printf("Votre prix est trop élevé\n");
                tentative=tentative-1;              //a sortir de tes if
            }
            if(aleatoire==nbsaisie){
                printf("\n\n\nWell done, vous avez gagné\n\n\n");
                break;                              // Inutile, si aleatoire==nb_saisie, tu vas necessairement sortir de ta boucle. N'utilise que des break dans les switch
            }
        }
        if (tentative==0){
            printf("\n\n\nVous avez perdu :[\n");
        }
        printf("\n\n\nAppuyer sur 1 pour recommencer\n"
               "Appuyer sur 0 pour quitter\n");
        scanf("%d",&continuer);
        if (continuer==1){                          //Tu peux faire beaucoup plus propre. Il suffit simplement d'affecter 8 a tentative au debut de ton while (ca t'évitera du coup un if).
            tentative=8;
        }
    }
    return 0;
}
