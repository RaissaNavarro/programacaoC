#include <stdio.h>

int main() {

    // int idade;

    // printf("Digite a sua idade: \n");
    // scanf("%d", &idade);

    // if (idade < 12) {
    //     printf("Você é uma criança!\n");

    //     // Código a ser executado se condicao1 for verdadeira
    //   } else if (idade >=12 && idade < 18) {
    //     printf("Você é adolescente!\n");

    //     // Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
    //   } else if (idade >= 18 && idade < 60){
    //     printf("Você é adulto!\n");
    //     // Código a ser executado se todas as condições anteriores forem falsas
    //   } else {
    //     printf("Você é um idoso!\n");
    //   }

    int nota;

    printf("Digite a sua nota: \n");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("Conceito A!\n");

    } else if ( nota >= 80){
        printf("Conceito B!\n");

    } else if (nota >= 70){
        printf("O conceito é C! \n");

    } else if (nota >= 60){
        printf("O conceito é D!\n");
    
    } else {
        printf("O conceito é F!\n");
        
    }
}

