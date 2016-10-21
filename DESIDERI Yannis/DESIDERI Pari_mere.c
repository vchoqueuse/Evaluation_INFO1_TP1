#include <stdio.h>



int main(int argc, char *argv[])
{
    int flag=0,i=0,n=0,tirage_a,tirage_b;
    float nb_serie=0, proba=0;  //<- Attention nb series doit etre déclaré en tant qu'entier
    srand(time(NULL));
    for(i=0;i<10000;i++)
    {
        flag = 0;
       for(n=0;n<24;n++)
       {

           tirage_a = 1+(rand()%6);
           tirage_b = 1+(rand()%6);
           if(tirage_a == 6 && tirage_b == 6)
           {
               flag = 1;
           }

       }
       if(flag == 1)
       {
           nb_serie++; //<- tu peux faire plus rapide. Au lieu de faire un if, tu peux faire simplement nb_series=nb_series+flag
       }
    }

    printf("la probabilité est: %.2f\n", nb_serie/10000);
    return 0;
}
