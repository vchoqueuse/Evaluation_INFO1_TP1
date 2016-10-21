#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nb_series=0,flag,i,j,aleatoire;               // probabilité > 0.5
    float probabilite;
    srand(time(NULL));
    for(i=0;i<10000;i++){
        flag=0;
        for(j=0;j<4;j++){
            aleatoire=1+rand()%6;
            if(aleatoire==6){
                flag=1;
            }
        }
        if (flag==1){
            nb_series++;
        }
    }
    probabilite=nb_series/10000.0;
    printf("%.3f\n",probabilite);
    return 0;


    int nb_series,flag,i,j,de_1,de_2;                 // probabilité < 0.5
    float probabilite;
    for(i=0;i<10000;i++){
        flag=0;
        for(j=0;j<24;j++){
            de_1=1+rand()%6;
            de_2=1+rand()%6;
            if(de_1==6 && de_2==6){
                flag=1;
            }
        }
        if (flag==1){
            nb_series++;  //<- tu peux faire plus rapide. Au lieu de faire un if, tu peux faire simplement nb_series=nb_series+flag
        }
    }
    probabilite=nb_series/10000.0;
    printf("%.3f\n",probabilite);
    return 0;
}
