#include <stdio.h>
#include <stdlib.h>

int main() {

  int quantVetor,vetPar[100],vetImpar[100],quantPar[100],quantImpar[100],posicao[100];

  printf("Digite o tamanho do vetor que deseja\n");
  scanf("%d",&quantVetor);
  //
  printf("Atribua os valores ao vetor\n");
  for (int i = 0; i < quantVetor ; i++) {
    scanf("%d", &posicao[i]);
    if(posicao[i] % 2 == 0){
      vetPar[i]=posicao[i];
    } else{
      vetImpar[i]=posicao[i];
    } // fim else
  } // fim for
  //
  printf("\n\n");
  //
  for (int i = 0; i < quantVetor; i++) {
    printf("valor da posicao :  %d\n", posicao[i]);
  } // fim for
  return 0;
}
