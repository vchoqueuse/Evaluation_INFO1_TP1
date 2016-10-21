#include <stdio.h>

int main(int argc, char *argv[])
{
    int nombre1,i=0,nb_prix,recommencer=1;
    srand( time(NULL) );
    while (recommencer != 2)
    {
    system("clear");
    nombre1=rand()%100+1;
        
    //<- il faut remettre i à 0 ici, sinon la deuxième fois, tu n'auras pas 8 tentatives.
    printf("entrez un nombre entre 1 et 100:\n");
    do
    {

        i++;
        scanf("%d", &nb_prix);

        if(nb_prix>nombre1)
        {
            printf("votre prix est trop eleve\n");
        }
        if(nb_prix<nombre1)
        {
            printf("Votre prix est trop faible\n");
        }
        printf("il vous reste %d tentatives.\n", 8-i);
        if(nb_prix == nombre1)
        {
            printf("Well done, vous avez gagner !\n");
        }

    }while(i<8 && nombre1 != nb_prix);

        printf(" 1.recommencer 2.quitter\n");
        scanf("%d" ,&recommencer);
    }
    return 0;
}
