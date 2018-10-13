/*
versao: 1.0
Criado por André Spindola
Faculdade Uninter / curso analise e desenvolvimento de sistemas.
Materia logica de programacao e algoritmos.
Aula pratica - Exercicio 2(faz o calculo do imposto de renda).
*/
//Inclusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main() {
  //declaracao das variaveis
  float salario, salarioTotal,desconto;
  //pede o salario
  printf("Seja bem vindo a calculadora de imposto de renda.\n");
  printf("-------------------------------------------------\n");
  printf("Qual o seu salario mensal?.\n");
  scanf("%f",&salario);
  //faz as comparacoes dos valores, e mostra o seu respectivo valor na tela.
  if (salario <= 1903.98) {
    printf("Devido o seu salario ser inferior ha R$1903.98, nao tem desconto de imposto.\n");
  }
  if ((salario >= 1903.99) && (salario <= 2825.65)) {
    salarioTotal = (((salario * 0.075) - 142.80) - salario) * -1;
    printf("\nO seu salario era de R$%.2f, o valor do imposto foi de R$%.2f\n",salario,salario - salarioTotal);
    printf("O valor total do seu salario ficou em R$%.2f\n", salarioTotal);
  }
  if ((salario >= 2826.66) && (salario <= 3751.05)) {
    salarioTotal = (((salario * 0.15) - 354.80) - salario) * -1;
    printf("\nO seu salario era de R$%.2f, o valor do imposto foi de R$%.2f\n",salario,salario - salarioTotal);
    printf("O valor total do seu salario ficou em R$%.2f\n", salarioTotal);
  }
  if ((salario >= 3751.06) && (salario <= 4664.68)) {
    salarioTotal = (((salario * 0.225) - 636.13) - salario) * -1;
    printf("\nO seu salario era de R$%.2f, o valor do imposto foi de R$%.2f\n",salario,salario - salarioTotal);
    printf("O valor total do seu salario ficou em R$%.2f\n", salarioTotal);
  }
  if (salario >= 4664.69) {
    salarioTotal = (((salario * 0.275) - 869.36) - salario) * -1;
    printf("\nO seu salario era de R$%.2f, o valor do imposto foi de R$%.2f",salario,salario - salarioTotal);
    printf("O valor total do seu salario ficou em R$%.2f\n", salarioTotal);
  }
  return 0;
}
