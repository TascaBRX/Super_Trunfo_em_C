// objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades.
// Instruções:
// Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
//    - Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
//    - Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
//    - Nome da Cidade: O nome da cidade. Tipo: char[] (string)
//    - População: Um número inteiro representando a população da cidade. Tipo: int
//    - Área: Um número de ponto flutuante representando a área da cidade em km². Tipo: float
//    - PIB: Um número de ponto flutuante representando o PIB da cidade.
//    - Numero de Pontos turísticos: Um número inteiro representando o número de pontos turísticos da cidade. Tipo: int

#include <stdio.h>

int main(){
  // Declaração das variáveis da carta 1
  char estado1[2];
  char codigoCarta1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1, pib1;
  int pontosTuristicos1;

  // Entrada dos dados da carta 1
  printf("Digite o estado (A-H) da carta 1: ");
  scanf(" %c", &estado1[0]);
  estado1[1] = '\0'; // Termina a string com o caractere nulo
  printf("Digite o código da carta 1 (ex: A01): ");
  scanf("%s", codigoCarta1);
  printf("Digite o nome da cidade da carta 1: ");
  scanf(" %c[^\n]", nomeCidade1); // Lê até a nova linha
  printf("Digite a população da cidade da carta 1: ");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade da carta 1 (em km²): ");
  scanf("%f", &area1);
  printf("Digite o PIB da cidade da carta 1: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos da cidade da carta 1: ");
  scanf("%d", &pontosTuristicos1);

  // saída dos dados da carta 1
  printf("\n=====Dados da Carta 1:=====\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

}