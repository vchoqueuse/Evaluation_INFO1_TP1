#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 100       //<- inutile
int main(int argc, char *argv[])
{ int i,x,nombre,nb_tentatives=9,cont=1;
    nombre=0;
    srand (time(NULL));
    nombre=1+rand()%100;
   while (cont==1)
   {

       nb_tentatives=9;

    do { nb_tentatives--;

    printf("il vous reste %d tentatives\n",nb_tentatives);
    printf("Entrez un nombre compris entre 1 et 100 euros\n");
    scanf("%d",&x);
    if(x <nombre) {
        printf("votre prix est trop faible\n");}
    if(x>nombre){
        printf("votre prix est trop eleve\n");}
    if (x==nombre) {
        printf("Well done, vous avez gagné:\n)");}
    }
       while(nb_tentatives>0 && x!=nombre);

    if (nb_tentatives<=0) {
        printf("Vous avez perdu:[\n");
    }
    printf("Appuyer 1 pour recommencer ou sur 0 pour quitter\n");
    scanf("%d",&i);
    //Tu dois faire plus simple ici en enlevant tes deux ifs. En effet, il suffit simplement de faire de mettre la valeur de i dans cont c-a-d cont=i, ou encore plus simple, de changer ta variable dans ton scanf scanf("%d",&cont);
        if (i==1) { cont=1;}
        if (i==0) {cont=0;}
    }





    return 0;
}
