#include <stdio.h>
#include <stdlib.h>

int main()
{
   int annee, mois ,jour,heure,secondes,choix;
    printf("entrer une annee : ");
    scanf("%d",&annee);
    printf(" \t~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~ \n");
    printf(" \t 1.convertir cette annee en mois \n");
    printf(" \t 2.convertir cette annee en jeur \n");
    printf(" \t 3.convertir cette annee en heur \n");
    printf(" \t 4.convertir cette annee en secondes \n");
    printf("entrer votre choix : ");
      scanf("%d",&choix);
      switch(choix){
      case 1 :
        printf("cette annee en mois est : %d",annee*12);
        break;
      case 2 :
          printf("cette annee en jour est : %d",annee*365);
          break;
      case 3 :
        printf("cette annee en heur est : %d ",annee*8760);
        break;
        case 4 :
        printf("cette annee en secondes est : %d ",annee*31557600);
        break;

    return 0;
}
