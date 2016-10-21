#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 6
int main(int argc, char *argv[])
{ int tirage,tirage2,i=10001,a=5,flag;  //<- Initialisations de i et a inutiles
  float nb_series=0,probabilite;     //<- Attention nb series doit etre déclaré en tant qu'entier
    srand (time(NULL));


    for(i=0;i<10000;i++)
    {
      flag=0;
        for(a=0;a<4;a++)
        {
            tirage=(1+rand()%6);
            printf("un nombre entre 1 et 6\n");

            if (tirage==6) flag=1;  //<- Attention syntaxe à eviter (il faut mettre des accolades).
        }
       if(flag==1){
       nb_series++;}
    }
    probabilite=nb_series/10000.;
    printf("la probabilite d'obtenir au moins un 6 en jetant 4fois un de est %f",probabilite);
    for(i=0;i<10000;i++)
    {
      flag=0;
        for(a=0;a<24;a++)
        {
           tirage=(1+rand()%6);
           tirage2=(1+rand()%6);
           if (tirage==6 && tirage2==6) flag=1;
        }
       if(flag==1){
       nb_series++;}
    }
    probabilite=nb_series/10000.;
    printf("la probabilite d'obtenir au moins un 6 en jetant 24fois un de est %f",probabilite);

    return 0;
}
