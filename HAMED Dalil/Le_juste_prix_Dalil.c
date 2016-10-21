#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i, prix_secret, prix_donne=0,victoire=0,jouer;
    srand(time(NULL));
    do
    {
        prix_secret=1+(rand()%100);
        i=0;
        while(i<8 && victoire==0)
        {
            printf("Il vous reste %d tentative(s)\n",8-i);
            do
            {
                printf("Entrer un nombre compris entre 1 et 100 : ");
                scanf("%d",&prix_donne);
            }while (prix_donne<1 || prix_donne>100);
            if(prix_donne<prix_secret)
            {
                printf("Votre prix est trop faible\n\n");
            }
            else if(prix_donne>prix_secret)
            {
                printf("Votre prix est trop élevé\n\n");
            }
            else if(prix_donne==prix_secret)
            {
                printf("Well done, vous avez gagné :)\n\n");
                victoire=1;
            }
            i++;

        }
        if(victoire!=1)
            printf("Vous avez perdu :(\n");
        
        //attention, ajoute bien des accolades dans ton if...cela t'evitera bien des problèmes !
        printf("Entrer 1 pour rejouer ou 0 pour quitter : ");
        scanf("%d",&jouer);
    }while(jouer!=0);
    return 0;
}
