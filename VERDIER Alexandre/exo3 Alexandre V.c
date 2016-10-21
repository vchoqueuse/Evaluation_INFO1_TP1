#include <stdio.h>

int main(int argc, char *argv[])
{
    int p,m=1,i=0,nombre;
    printf("quel est votre pactole de depart?\n");
    scanf("%d",&p);
    for(i=0;i<500;i++) {
        p=p-m;                    //<- Bug, il faut s'assurer que le pactole reste positif.
        printf("numero de tirage=%d\n",i);
        printf("pactole=%d\n",p);
        printf("mise=%d\n",m);
        nombre=1+(rand()%32);
        if ((nombre%2)==0) {
            p=p+(2*m);
            m=1;
        }
        if ((nombre%2)==1) {    //<- Utilise une structure if/else
            m=m*2;
        }
    }
    printf("pactole=%d\n",p);
    return 0;
}
