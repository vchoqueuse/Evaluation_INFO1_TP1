#include <stdio.h>

int main(int argc, char *argv[])
{
    int tirage,z=1,nombre,b,i=1;    //utilise des variable avec des noms plus explicites.
    srand(time(NULL));
    while (i==1) {
    z=1;
    b=8;
    tirage=1+(rand()%100);          // -> mal placé
    printf("tirage=%d\n",tirage);
    while (z==1) {
    printf("entrer un nombre compris entre 1 et 100:\n");
    scanf("%d",&nombre);
    if (nombre<tirage) {
        printf("votre prix est trop faible\n");
        z=1;
    }
    if (nombre==tirage) {
        printf("Well done, vous avez gagne:)\n");
        z=0;
    }
    if (nombre>tirage) {
        printf("votre prix est trop eleve\n");
        z=1;
    }
    b=b-1;
    printf("il vous reste %d tentatives\n",b);
    if (b==0) {
        z=0;
        printf("vous avez perdu:(\n");
    }
    }

    printf("voulez vous rejouer?\n"
           "rejouer:entrer 1\n"
           "quitter: entrer 0\n");
    scanf("%d",&i);
    }
    return 0;
}
