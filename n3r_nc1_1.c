#include <stdio.h>

int main() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";  // é assim que funciona o ternário
  //com essa estrutura, a primeira parte é verdadeora e a segunda falsa. é como se fosse 1(verdadeiro) e 0 (falso)

  printf("Resultado: %s\n", resultado);

  return 0;
}