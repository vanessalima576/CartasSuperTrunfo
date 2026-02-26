#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // ==============================
  // Área para definição das variáveis
  // ==============================

  // Carta 1
  char codigo1[4];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Carta 2
  char codigo2[4];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;


  // ==============================
  // Área para entrada de dados
  // ==============================

  printf("=== Cadastro da Carta 1 ===\n");

  printf("Codigo da carta (ex: A01): ");
  scanf("%3s", codigo1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos1);


  printf("\n=== Cadastro da Carta 2 ===\n");

  printf("Codigo da carta (ex: B02): ");
  scanf("%3s", codigo2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos2);


  // ==============================
  // Área para exibição dos dados
  // ==============================

  printf("\n===== CARTA 1 =====\n");
  printf("Codigo: %s\n", codigo1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\n===== CARTA 2 =====\n");
  printf("Codigo: %s\n", codigo2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);

  return 0;
}

