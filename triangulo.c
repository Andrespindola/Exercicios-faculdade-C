/*
versao: 1.0
Criado por André Spindola
Faculdade Uninter / curso analise e desenvolvimento de sistemas.
Materia logica de programacao e algoritmos.
Aula pratica - Exercicio 1(recebe 3 valores faz a verificacao se pode ser feito
ou nao um triangulo e mostra na tela qual tipo de triangulo e).
*/
//Inclusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
//inicio do codigo
int main() {
  //declaracao das variaveis
  int x,y,z,posicao[3];

  printf("Digite abaixo os valores do triangulo\n");
  printf("-------------------------------------\n");
  //recebe os valores
  for (int indice = 0; indice < 3; indice++) {
    printf("Digite o %d lado do triangulo\n",indice + 1);
    scanf("%d",&posicao[indice]);
    //faz a negacao de numeros negativos ou igual a 0;
    while (posicao[indice] <= 0){
      printf("0 ou < 0 nao forma um triangulo por favor digite novamente a medida\n");
      scanf("%d",&posicao[indice]);
    }
  }
  //atribuição de valores para as variaveis.
  x = posicao[0], y = posicao[1], z = posicao[2];
  //passa ao usuario os dados que ele digitou
  printf("\nvalores digitados X:%d Y:%d Z:%d\n",x,y,z);
  //faz a verificacao de existencia do triangulo
  if ((((y - z) < x) && (x < (y + z))) && (((x - z) < y) && (y < (x + z))) && (((x - y) < z) && (z < (x + y)))) {
      //apos a verificacao informa ao usuario que tipo de triangulo e.
      if ((x == y) && (x == z) && (y == z)) {
        printf("O seu triangulo e um triangulo Equilatero\n");
        //triangulo com as 3 medidas iguais
      }
      else if ((x != y) && (x != z) && (y != z)) {
        printf("O seu triangulo e um triangulo Escaleno\n");
        //triangulo com as 3 medidas diferentes
      }
      else {
        printf("O seu triangulo e um triangulo Isosceles\n");
        //triangulo com 2 medidas iguais e 1 diferente
      }
    } else {
      printf("O valor %d nao pode criar um triangulo junto com %d e %d.\n", x,y,z);
      printf("Por favor digite novos valores validos.\n");
      //exibe ao usuario que os valores nao podem montar um triangulo
  }
  return 0;
}
