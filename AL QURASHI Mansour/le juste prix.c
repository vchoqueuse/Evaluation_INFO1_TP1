#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

   int a , prix ;   //<- il manque la décalaration de i (i est utilise en ligne 18)
   a<=100 ;         //<- ligne inutile.

       srand(time(NULL));
   // initialise le generateur de
   // nombre aleatoire . A admettre .
   prix=1+(rand()%100);
    
   //<- Il manque la possibilité de rejouer
    
   for (i=0;i<=8;i++) {  //<- Ce n'est pas un for mais un while


    printf(" il vous reste 8 tenatives ");

    printf(" entrez un nombre compris entre 1 et 100 euros ");

    scanf("%d",&a) ;


    if (a <prix)
    {
         printf (" votre prix est trop faible");
    }

    if ( a > prix)
    {
        printf(" votre prix est trop eleve");
    }

     if (a==prix)
     {
         printf (" well done, vous avez gagne ");

    }
}

    return 0;
}
