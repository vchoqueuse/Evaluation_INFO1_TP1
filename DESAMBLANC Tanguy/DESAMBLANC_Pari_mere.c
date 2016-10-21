#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int i,n1,tirage_1,flag_1;
    int n2,tirage_2a,tirage_2b,tirage_2,flag_2;
    float nb_series=0,nb_series2=0;     //<- Attention nb series doit etre déclaré en tant qu'entier
    srand(time(NULL));
    for (i=0;i<10000;i++){
        flag_1=0;
        flag_2=0;
        for (n1=0;n1<4;n1++){           // Simulation du premier pari
            tirage_1=(rand()%6)+1;
            if (tirage_1==6){
                flag_1=1;
            }
        }

        for (n2=0;n2<24;n2++){          // Simulation du deuxième pari
            tirage_2a=((rand()%6)+1);
            tirage_2b=((rand()%6)+1);
            tirage_2=tirage_2a+tirage_2b;
            if (tirage_2==12){
                flag_2=1;
            }
        }

        if (flag_1==1){                // Incrémentation du premier pari
            nb_series=nb_series+1;
        }

        if (flag_2==1){                // Incrémantation du deuxième pari
            nb_series2=nb_series2+1;
        }

    }
    printf("La probabilité d'obtenir : \n");
    printf("- Un 6 en jetant 4 fois un dé est de :\n%f\n",nb_series/10000);
    printf("- Un double 6 en jetant 24 fois 2 dés est de :\n%f\n",nb_series2/10000);
    return 0;
}
