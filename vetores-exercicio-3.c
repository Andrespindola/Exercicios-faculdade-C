#include <stdio.h>
#include <stdlib.h>

int main() {

  int quantVetor,vetPar,VetImpar,quantPar[100],quantImpar[100],posicao[100];

  printf("Digite o tamanho do vetor que deseja\n");
  scanf("%d",&quantVetor);

  for (int i = 0; i < quantVetor ; i++) {
    printf("Atribua os valores ao vetor\n");
    scanf("%d", &posicao[i]);
  }
  printf("\n\n");
  for (int i = 0; i < quantVetor; i++) {
    printf("valor da posicao :  %d\n", posicao[i]);
  }
  return 0;
}
