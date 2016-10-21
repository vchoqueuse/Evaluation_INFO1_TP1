#include <stdio.h>

int main(int argc, char *argv[])
{int P,M,tirage,Nb;
    srand(time(NULL));
    tirage=1+rand()%500;
    printf("quel est votre pactole de depart");
    M=1;
    P-M;                //<- Cette ligne ne sert à rien. Il faut affecter le resultat quelque part c-a-d P=P-M.
    printf("le nombre de tirage:%d,votre pactole:%d et votre mise:%d\n",tirage,P,M);
    Nb=1+rand()%32;
    if ((Nb%2)==0) M=2M;    //<- Evite ce type de structure, utilise des accolades

    
    
    return 0;
}
