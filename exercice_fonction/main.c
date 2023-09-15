#include <stdio.h>
#include <stdlib.h>

int addition() {
    float N1= 0,N2 = 0;
    printf("entrer les nombres : ");
    scanf("%f+%f", &N1,&N2);
    float solution = N1 + N2;
    printf(" la somme de %f  + %f = %.2f\n",N1,N2,solution);
    main();
}
int soustraction() {
    float N1= 0,N2 = 0;
    scanf("%f-%f", &N1,&N2);
    float solution = N1- N2;
    printf("  la soustraction de % f - %f = %.2f\n",N1,N2,solution);
    main();
}
int multiplication() {
    float N1=1,N2=1;
    scanf("%f*%f", &N1,&N2);
    float solution = N1* N2;
    printf(" la multiplication de %f * %f = %.2f\n",N1,N2,solution);
    main();
}
int division() {
    float N1= 1,N2= 1;
    scanf("%f/%f/", &N1,&N2);
    if(N2 == 0) {
        printf("il ya une erreur");
        main();
    }
    float solution = N1 / N2;
    printf(" la division de %f sur %f  = %.2f\n",N1,N2,solution);
    main();
}
int carre() {
    float N1 = 1,N2 = 1;
    scanf("%f^{%f}", &N1,&N2);
    float solution = pow(N1,N2);
    printf(" le carree de %f = %.2f\n",N1,solution);
    main();
}
int racine () {
    float N1;
    scanf("%f", &N1);
    float solution = sqrt(N1);
    printf("la racine carree du %f  = %.2f \n",N1,solution);
    main();
}
int main() {
    menu();
}
int menu() {
        int choix;
    printf("~~~~~~~~~~~~~~Choisissez une operation~~~~~~~~~~~~~~ \n");
           printf("-1- Addition\n -2- Soustraction\n -3- Multiplication\n -4- Division\n-5- Carre\n-6- Racine carree\n-7- Quitter\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        addition();
        break;
    case 2:
        soustraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        carre();
        break;
    case 6:
        racine();
        break;
    case 7:
        printf("Le Program a quitter");
        break;
    default:
        main();
        break;
    }
    return 0;
}





