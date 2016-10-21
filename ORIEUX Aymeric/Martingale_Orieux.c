#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

    int P,M=1,i,nb;
    srand(time(NULL));
    printf("Quel est votre pactole de départ ?  ");
    scanf("%d",&P);
    for(i=0;i<500;i++){
        P-=M;
        if(P<0){
            break;
        }
        printf("numéro de tirage : %d  pactole : %d  mise : %d\n",i,P,M);
        nb=rand()%33;
        nb=nb%2;
        if(nb==0){
            P=P+2*M;
            M=1;
        }
        if(nb==1){  //<- Utilise une structure if/else
            M=2*M;
        }
    }
    printf("pactole final : %d\n",P);
    return 0;
}
