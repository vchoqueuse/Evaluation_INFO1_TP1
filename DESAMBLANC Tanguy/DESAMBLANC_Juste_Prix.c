#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int prix=0,choix_prix,tentative=8,continuer=1,touche;
    srand(time(NULL));
    prix=(rand()%100)+1;            // -> mal placé
    while (tentative<=8&&choix_prix!=prix){
    printf("il vous reste %d tentative\n",tentative);

    printf ("Entrez un nombre compris en 1 et 100 :");
    scanf("%d",&choix_prix);

    if (choix_prix<prix){
        printf("Votre prix est trop faible\n");
    }

    if (choix_prix>prix){
        printf("Votre prix est trop élevé\n");
    }

    if (choix_prix==prix){
        printf ("Well done! vous avez gagné !! :D\n");
    }
    tentative--;

    if (tentative==1){
        printf("Vous avez perdu :/\n");
        system("clear");
        printf("Voulez-vous rejouer ?\n");
        printf("************ Tapez **\n");
        printf("Continuer **   1   **\n");
        printf("Quitter   **   0   **\n");
        scanf("%d",&touche);
        switch (touche){ // N'utilise pas de switch
        case 1 : {continuer=1,tentative=8;} break;
        case 0 : {return 0;} break;
        default : {return 0;}
    }


    }

    }

}
