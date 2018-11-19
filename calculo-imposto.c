/*
versao: 1.1
Criado por André Spindola
Faculdade Uninter / curso analise e desenvolvimento de sistemas.
Materia logica de programacao e algoritmos.
Aula pratica - Exercicio 2(faz o calculo do imposto de renda).
*/
//Inclusao das bibliotecas
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	//declaracao das variaveis
	float salario = 0.0, salarioTotal = 0.0,desconto = 0.0;
	//pede o salario
	printf("Seja bem vindo a calculadora de imposto de renda.\n");
	printf("-------------------------------------------------\n");
	printf("Qual o seu salario mensal?.\n");
	scanf_s("%f", &salario);
	printf("\n");//apenas uma quebra linha para melhor visualizacao do resultado.
	//faz as comparacoes dos valores, e mostra o seu respectivo valor na tela.
	if (salario > 4664.68) {
		desconto = (salario * 0.275) - 869.36;
		salarioTotal = salario - desconto;
	}
	else if ((salario > 3751.05) && (salario < 4664.68)) {
		desconto = ((salario * 0.225) - 636.13);
		salarioTotal = salario - desconto;
	}
	else if ((salario > 2826.65) && (salario < 3751.05)) {
		desconto = ((salario * 0.15) - 354.80);
		salarioTotal = salario - desconto;
	}
	else if ((salario > 1903.98) && (salario < 2826.65)) {
		desconto = ((salario * 0.075) - 142.80);
		salarioTotal = salario - desconto;
	}
	else {
		salarioTotal = salario;
	}
	//if para comparacao de desconto, como nao tem imposto de renda o valor continua o mesmo.
	if (desconto == 0) {
		printf("Devido ao seu salario ser inferior ha R$1903.98, voce nao tera desconto de imposto.\n");
		printf("O seu salario continuara sendo R$%.2f.\n", salarioTotal);
	}
	else { //mostra ao usuario caso o seu salario tenha desconto.
		printf("\nO seu salario era de R$%.2f, o valor do imposto foi de R$%.2f\n", salario, desconto);
		printf("O valor total do seu salario ficou em R$%.2f\n", salarioTotal);
	}
	return 0;
}
