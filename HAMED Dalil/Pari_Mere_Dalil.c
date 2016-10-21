#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int flag,x,i,nb_aleatoire,nb_aleatoire2,nb_series=0;
    float probabilite_24lance,probabilite_4lance;
    srand(time(NULL));
    for(i=0;i<10000;i++)
    {
        flag=0;
        for(x=0;x<4;x++)
        {
            nb_aleatoire=1+(rand()%6);
            if(nb_aleatoire==6)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            nb_series++;    //<- tu peux faire plus rapide. Au lieu de faire un if, tu peux faire simplement nb_series=nb_series+flag
        }
    }
    probabilite_4lance=nb_series/10000.0;
    printf("La probabilité d'obtenir 6 avec 4 lancé est de %.2f\n",probabilite_4lance);
    nb_series=0;
    for(i=0;i<10000;i++)
    {
        flag=0;
        for(x=0;x<24;x++)
        {
            nb_aleatoire=1+(rand()%6);
            nb_aleatoire2=1+(rand()%6);
            if(nb_aleatoire==6 && nb_aleatoire2==6)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            nb_series++;    //<- tu peux faire plus rapide. Au lieu de faire un if, tu peux faire simplement nb_series=nb_series+flag
        }
    }
    probabilite_24lance=nb_series/10000.0;
    printf("La probabilité d'obtenir un double 6 avec 24 lancé est de %.2f\n",probabilite_24lance);
    return 0;
}
