// #include <stdio.h>

// int main() {
//   int opcao;

//   printf("Escolha uma opção:\n");
//   printf("1. Verificar saldo\n");
//   printf("2. Fazer depósito\n");
//   printf("3. Fazer saque\n");
//   scanf("%d", &opcao);

//   switch (opcao) {
//     case 1:
//       printf("Saldo atual: R$ 1.000,00\n");
//       break;
//     case 2:
//       printf("Depósito realizado com sucesso\n");
//       break;
//     case 3: 
//     printf("Saque feito com sucesso!");
//       break;
//     } 

// }

int main() {
    int dia = 3;
  
    if (dia == 1) {
      printf("Domingo\n");
    } else if (dia == 2) {
      printf("Segunda-feira\n");
    } else if (dia == 3) {
      printf("Terça-feira\n");
    } else if (dia == 4) {
      printf("Quarta-feira\n");
    } else if (dia == 5) {
      printf("Quinta-feira\n");
    } else if (dia == 6) {
      printf("Sexta-feira\n");
    } else if (dia == 7) {
      printf("Sábado\n");
    } else {
      printf("Dia inválido\n");
    }
  
    return 0;
  }