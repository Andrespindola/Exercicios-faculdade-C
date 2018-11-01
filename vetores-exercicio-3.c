/*
versao: 1.0
Criado por André Spindola
Faculdade Uninter / curso analise e desenvolvimento de sistemas.
Materia logica de programacao e algoritmos.
Aula pratica - Exercicio 3.
*/
//inclusao bibliotecas
#include "pch.h" //sinceramente nao entendi o porque dessa biblioteca, mas sem ela o visual studio da erro ao compilar.
#include <stdio.h>
#include <stdlib.h>
#define RU 2419941
//principal
int main() {
	//declaracao de variaveis
	int aux = 0, quantVetor = 0, vetPar[100], vetImpar[100], quantPar = 0, quantImpar = 0, posicao[100], i,ruEncurtado=0, VetMultiplicado[100];
	ruEncurtado = RU % 100; //deixei como variavel pois em futuros exercicios caso seja pedido alem de 2 ultimos numero, basta alterar.
	/*pega o resto do RU - conforme o exercicio pede a multiplicação do ultimos 2 numeros do RU
	Essa variavel ja facilita no final o calculo. */
	//pede o usuario o tamanho do vetor que deseja
	printf("Digite o tamanho do vetor que deseja\n");
	scanf_s("%d", &quantVetor);
	//faz a negacao de numeros maiores que 101.
	while (quantVetor > 100) {
		printf("Numero invalido por favor digite um numero menor que 101. \n");
		scanf_s("%d", &quantVetor);
	}
	//pede ao usario que o preencha os vetores
	printf("Atribua os valores ao vetor, lembre-se use valores diferentes.\n");
	for (i = 0; i < quantVetor; i++) {
		scanf_s("%d", &posicao[i]);

		//se par faz a atribuição ao vetor
		if (posicao[i] % 2 == 0) {
			vetPar[quantPar] = posicao[i];
			quantPar++;
		} // senao faz a atribuicao ao vetor impar
		else {
			vetImpar[quantImpar] = posicao[i];
			VetMultiplicado[quantImpar] = vetImpar[quantImpar] * ruEncurtado;
			quantImpar++;
		} // fim else
	} // fim for
	printf("\n\n"); //apenas quebra linha
	/* enquanto fazia o exercicio, um detalhe que estava me incomodando era os numeros fora de ordem digitados
	entao pesquisei e aprendi sobre metodo bubble sort, que deixa o vetor organizado em ordem crescente.*/
	//bubble sort - PARES
	for (int indice = 1; indice < quantPar; indice++) {
		for (i = 0; i < quantPar - 1; i++) {
			if (vetPar[i] > vetPar[i + 1]) {
				aux = vetPar[i]; // faz a atribuição do valor em uma variavel temporaria
				vetPar[i] = vetPar[i + 1];
				vetPar[i + 1] = aux; // faz a atribuicao da variavel temporaria no vetor principal
			} // fim  if
		}// fim for
	} // fim for
	//bubble sort - IMPARES
	for (int indice = 1; indice < quantImpar; indice++) {
		for (i = 0; i < quantImpar - 1; i++) {
			if (vetImpar[i] > vetImpar[i + 1]) {
				aux = vetImpar[i];// faz a atribuição do valor em uma variavel temporaria
				vetImpar[i] = vetImpar[i + 1];
				vetImpar[i + 1] = aux;// faz a atribuicao da variavel temporaria no vetor principal
			} //fim if
		} //fim for
	}//fim for
	//bubble sort - IMPARES MULTIPLICADOS
	for (int indice = 1; indice < quantImpar; indice++) {
		for (i = 0; i < quantImpar - 1; i++) {
			if (VetMultiplicado[i] > VetMultiplicado[i + 1]) {
				aux = VetMultiplicado[i];// faz a atribuição do valor em uma variavel temporaria
				VetMultiplicado[i] = VetMultiplicado[i + 1];
				VetMultiplicado[i + 1] = aux;// faz a atribuicao da variavel temporaria no vetor principal
			} //fim if
		} //fim for
	}//fim for
	//fim BUBBLE SORT
	printf("----RU - [%d]---- \n", RU);
	//mostra ao usuario os numeros pares
	printf("Numeros pares : ");
	for (i = 0; i < quantPar; i++) {
		printf(" [%d] ", vetPar[i]);
	} // fim for
	printf("\n");
	//mostra ao usuario os numeros impares
	printf("Numero Impares : ");
	for (i = 0; i < quantImpar; i++) {
		printf(" [%d] ", vetImpar[i]);
	} // fim for
	printf("\n");//quebra linha
	//mostra ao usuario os numeros impares multiplicados pelos 2 ultimos numeros do RU
	printf("Numeros Impares Multiplicados : ");
	for (i = 0; i < quantImpar; i++){
		printf(" [%d] ", VetMultiplicado[i]);
	}
	printf("\n\n"); //apenas um quebra linha
	return 0;
}
