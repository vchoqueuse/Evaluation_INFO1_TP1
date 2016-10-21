#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int pactole,mise,i,nb_aleatoire,testpairimpair;
    srand(time(NULL));
    printf("Quelle est votre pactole de départ ? : ");
    scanf("%d",&pactole);
    mise=1;
    for(i=0;i<500;i++)
    {
        pactole=pactole-mise;
        printf("- Tirage: %d Pactole: %d mise: %d\n",i+1,pactole,mise);
        nb_aleatoire=1+(rand()%32);
        testpairimpair=nb_aleatoire%2;
        if(testpairimpair==1)
        {
            mise=2*mise;
        }
        else if(testpairimpair==0)  //<- Utilise une structure if/else et non un if/ else if
        {
            pactole=pactole+(2*mise);
            mise=1;
        }
    }
    printf("Votre pactole est de %d\n",pactole);
    return 0;
}
