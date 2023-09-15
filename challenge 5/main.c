#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Xa,Ya,Xb,Yb;
    float AB;
    printf("entrer la coordonnee X de A : ");
    scanf("%f",&Xa);
    printf("entrer la coordonnee Y de A : ");
    scanf("%f",&Ya);
    printf("entrer la coordonnee Y de B : ");
    scanf("%f",&Xb);
    printf("entrer la coordonnee Y de B : ");
    scanf("%f",&Yb);
    AB = sqrt (pow((Xb - Xa),2) - pow((Yb - Ya),2));
    printf("la distance entre les deux points A et B est :%.2f",AB);
    return 0;
}
