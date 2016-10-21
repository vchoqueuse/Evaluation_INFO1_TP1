#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
//{
//    int i=0,flag,z=0,tirage;
//    float nb_series=0;
//    srand(time(NULL));
//    for(i=0;i<10000;i++) {
//        flag=0;
//        for (z=0;z<4;z++) {
//            tirage=1+(rand()%6);
//            printf("tirage=%d\n",tirage);
//            if (tirage==6) {
//                flag=1;
//            }
//        }
//        if (flag==1) {
//            nb_series=nb_series+1;
//        }
//    }
//    printf("P=%f\n",nb_series/10000.);
//    return 0;
//}

{
    int i=0,flag,z=0,d1,d2;
    float nb_series=0;  //<- Attention nb series doit etre déclaré en tant qu'entier
    srand(time(NULL));
    for(i=0;i<10000;i++) {
        flag=0;
        for (z=0;z<24;z++) {
            d1=1+(rand()%6);
            d2=1+(rand()%6);
            printf("d2=%d",d2);
            printf("d1=%d\n",d1);
            if (d1==6 && d2==6) {
                flag=1;
            }
        }
        if (flag==1) {
            nb_series=nb_series+1;  //<- tu peux faire plus rapide. Au lieu de faire un if, tu peux faire simplement nb_series=nb_series+flag
        }
    }
    printf("P=%f\n",nb_series/10000.);
    return 0;
}


