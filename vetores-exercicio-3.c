#include <stdio.h>
#include <stdlib.h>

int main() {

  int aux=0,quantVetor = 0,vetPar[100],vetImpar[100],quantPar = 0,quantImpar = 0,posicao[100],i;

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
  //bubble sort - metodo para deixar o vetor em ordem crescente - PARES
  for (int indice = 1; indice < quantPar; indice++) {
   for (i = 0; i < quantPar - 1; i++) {
     if (vetPar[i] > vetPar[i + 1]) {
       aux = vetPar[i];
       vetPar[i] = vetPar[i + 1];
       vetPar[i + 1] = aux;
     }
   }
 }
 //bubble sort - metodo para deixar o vetor em ordem crescente - IMPARES
 for (int indice = 1; indice < quantPar; indice++) {
  for (i = 0; i < quantPar - 1; i++) {
    if (vetImpar[i] > vetImpar[i + 1]) {
      aux = vetImpar[i];
      vetImpar[i] = vetImpar[i + 1];
      vetImpar[i + 1] = aux;
    }
  }
}
printf("Numeros pares : ");
for (i = 0; i < quantPar; i++) {
  printf(" [%d] ",vetPar[i]);
} // fim for
printf("\n");
printf("Numero Impares : ");
for (int i = 0; i < quantImpar; i++) {
  printf(" [%d] ",vetImpar[i] );
} // fim for

  return 0;
}
