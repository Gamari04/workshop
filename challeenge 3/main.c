#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Entrer un nombre :");
    scanf("%d", &a);
    printf("Entrer un nombre :");
    scanf("%d", &b);
    int somme = a + b;
    int difference = a - b;
    int multi = a * b;
    int division = a / b;
    int modulo = a % b;
    printf("a + b = %d \n", somme);
    printf("a - b = %d \n", difference);
    printf("a x b = %d \n", multi);
    printf("a / b = %d \n", division);
    printf("a %% b = %d \n", modulo);

  return 0;
}
