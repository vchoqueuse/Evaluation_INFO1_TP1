#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int p,m,i,tirage;
    srand(time(NULL));
    printf("Quel est votre pactole de départ ?");
    scanf ("%d",&p);
    m=1;
    for (i=0;i<500;i++){
        p=p-m;
        tirage=rand()%32;

    }

    return 0;
}
