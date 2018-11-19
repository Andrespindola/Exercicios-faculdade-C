# Exercicios-faculdade-C
Alguns exercícios feitos na matéria de logica de programação em C.

Exercicio triangulo - Faça um algoritmo em linguagem C que recebe três valores X, Y e Z do usuário, e
determine se estes valores podem formar os lados de um triangulo (por exemplo, o valor
zero não pode formar um triangulo). Em caso afirmativo, informar na tela se o triangulo é
equilátero, isósceles ou escaleno.
Imprima na tela um teste do seu programa utilizando os três últimos valores de sua
matricula da UNINTER como lados do triangulo, cada valor da sua matrícula será um dos
valores X, Y ou Z. Por exemplo, se sua matricula For 1234567, faça X = 5, Y = 6 e Z = 7.

Exercicio Imposto de renda - Escreva um programa em linguagem C que receba como dado de entrada a base de
cálculo mensal de um trabalhador (seu salário) e retorne o imposto de renda devido.
Imprima na tela um exemplo contendo o salário do trabalhador, o imposto devido e o
salário final já com este desconto. Para o exemplo, utilize a sua matricula da UNINTER
pegando somente os 4 últimos dígitos dela e usando-os como salário. Por exemplo, se sua
matricula for 1234567, o salário será R$ 4567.

Exercicio Vetores - Faça um algoritmo em linguagem C com as seguintes funcionalidades:
 Leia um vetor de N posições. O valor máximo de N deverá ser no máximo
100. A leitura deverá ser feita manualmente pelo teclado;
 Crie mais dois vetores. Armazene em um destes vetores todos os valores
PARES digitados, e no outro, todos os valores ÍMPARES digitados;
 Imprima na tela, de uma forma legível, o número do seu RU, o vetor dos pares
e o vetor dos ímpares, este último deve ter multiplicado cada valor pelos dois
últimos números do seu RU. Por exemplo: se seu RU for 1234567,
multiplique cada valor do vetor por 67.

Exercicio Matrizes - Faça um algoritmo em linguagem C com as seguintes funcionalidades:
 Receba duas matrizes como dados de entrada. A dimensão das matrizes
deve ser de, no máximo 5x5. Ambas matrizes devem ter as mesmas
dimensões;
 O usuário deve digitar a dimensão das matrizes (máximo 5x5). Faça uma
checagem usando um laço de repetição que só permita o programa avançar
caso ele digite dimensões corretas de no máximo 5;
 Escreva ambas matrizes na tela, de uma forma legível;
Escreva a matriz resultante da soma destas duas matrizes multiplicada pelos
últimos dois números do seu RU da UNINTER;
 Escreva um vetor resultante da soma das diagonais principais das duas
matrizes multiplicado pelos últimos dois números do seu RU da UNINTER;

Exercicio Media Apols - Faça um algoritmo em linguagem C que contenha uma FUNÇÃO que:
a. Recebe como parâmetro as notas de uma disciplina (APOLs, prova objetiva,
prova discursiva e atividade prática), seguindo os critérios da UNINTER;
b. Retorna como resposta da função: 1 se o aluno foi aprovado, 2 se está em
exame, ou 0 se está reprovado.
No programa principal, leia todas as notas do aluno nas provas e atividades (0 -
100) e passe-as como parâmetro para a função que você criou. Com o retorno que
a função irá fornecer, imprima na tela as mensagens “APROVADO”,
“REPROVADO” e “EM EXAME”.
Para resolver este exercício, utilize a Equação abaixo que calcula o média de um
aluno em uma disciplina da UNINTER.
Para estar aprovado, o aluno precisa ter média 70 ou mais. Para estar em exame,
precisa estar com média entre 30 e 69. Abaixo de 30 estará reprovado diretamente.
𝑁𝑜𝑡𝑎 =  (∑ 𝐴𝑝𝑜𝑙𝑠 / 5 ) ∗ 20 + 𝑃𝑂 ∗ 20 + 𝑃𝐷 ∗ 30 + 𝐴𝑃 ∗ 30  / 100
Em que PO é a prova objetiva, PD prova discursiva e AP é atividade prática.
ATENÇÃO, VOCÊ TAMBÉM DEVERÁ IMPRIMIR NA TELA A MÉDIA DO ALUNO
