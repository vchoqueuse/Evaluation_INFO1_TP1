#include <stdio.h>

int main(int argc, char *argv[])
{
int choix,nb=0,tentative=8;
int rejouer;

    
//<- Il manque l'initialisation du moteur aleatoire
while(rejouer==1)
{

printf("Entrez un nombre compris entre 1 et 100 euros\n");
nb=1+(rand()%100);

//<- il faut remettre tentative=8 ici
do
{

    printf("il vous reste %d tentaive\n",tentative);
    tentative=tentative-1;
    scanf("%d",&choix);

    if(choix>nb)
    {
        printf("votre choix est trop élevé\n");
}
    if(choix<nb)
    {
      printf("votre choix est trop faible\n");
    }

}
while(choix!=nb && tentative>0);

if(choix==nb){
    printf("well done ,vous avez gagnez\n");
}



if(tentative==0)  //<- tu peux simplement utiliser un else ici.
    {
    printf("vous avez perdu\n");
    }

printf("pour recommencer appuyez 1\n");
scanf("%d",&rejouer);
}



    return 0;

}
