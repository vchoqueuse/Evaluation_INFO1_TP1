#include <stdio.h>



int main(int argc, char *argv[])
{
    int p,i,nb,m=1,paire;
    srand(time(NULL));
    printf("Quelle est votre pactole de depart ?\n");
    scanf("%d", &p);

    for(i=0;i<500;i++)
    {
        p = p-m;
        printf("numero de tirage: %d  p:%d  M:%d\n", i,p,m);
         nb = (rand()%32);
         paire = nb%2;
         if (paire != 0 )
         {
            m= m*2;
         }
         if(paire == 0) //<- Utilise une structure if/else
         {
             p = p+(2*m);
             m=1;
         }
    }
printf("\nvotre pactole est : %d\n",p);
    return 0;
}
