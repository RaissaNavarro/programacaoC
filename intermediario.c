#include <stdio.h>


int main (){
    float numero1, numero2;
    float media;

    printf("Digite a primeira nota: %d\n");
    scanf("%f", & numero1);

    printf("Digite a segunda nota: %d\n");
    scanf("%f", & numero2);

    media = (numero1 + numero2) / 2;

    printf("A média é: %f\n", media);


    return 0;
}