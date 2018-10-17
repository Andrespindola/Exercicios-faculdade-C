#include <stdio.h>
#include <stdlib.h>

int main() {

  int quantVetor = 0,vetPar[100],vetImpar[100],quantPar = 0,quantImpar = 0,posicao[100],i;

  printf("Digite o tamanho do vetor que deseja\n");
  scanf("%d",&quantVetor);
  //
  printf("Atribua os valores ao vetor\n");
  for (i = 0; i < quantVetor ; i++) {
    scanf("%d", &posicao[i]);

    if(posicao[i] % 2 == 0){
      vetPar[quantPar]=posicao[i];
      quantPar++;
    } else{
      vetImpar[quantImpar]=posicao[i];
      quantImpar++;
    } // fim else
  } // fim for
  //
  printf("\n\n");
  //
  for (i = 0; i < quantPar; i++) {
    printf("par %d\n\n",vetPar[i] );
  } // fim for
  for (int i = 0; i < quantImpar; i++) {
    printf("impar %d\n\n",vetImpar[i] );
  } // fim for
  return 0;
}

