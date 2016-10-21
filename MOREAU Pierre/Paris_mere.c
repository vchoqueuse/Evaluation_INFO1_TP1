#include <stdio.h>

int main(int argc, char *argv[])
{
    int nb_serie, flag, nombre;
    flag=0;
    nb_serie=0;
    nb_serie=1+(rand()%4);              //<- Il faut initialiser le moteur aleatoire avant de faire un tirage aleaoire,
    srand (time(NULL));                 //<- et non l'inverse.
    printf("lancer 4 fois un dé a 6 faces");
    while (nb_serie!=4){                //<- Non, il faut utiliser une boucle for car tu sais à l'avance combien de fois tu dois boucler.
        printf("lancer à nouveau le dé");
        if (nombre=6){                  //<- Confusion affectation / test d'égalité.
            scanf("%d=1"&flag);         //<- Syntaxe scanf incorrecte. 
        }
        if (flag=1){                    //<- Confusion affectation / test d'égalité.

        }

    }

    return 0;
}
