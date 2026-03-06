#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 //carta1
    char estado1 [10] = "NA";
    char card_code1 [10] = "A01";
    char cidade1 [30] = "NãoseAplica";
    int populacao1 = 0, turismo1 = 0;
    float area1 = 0, pib1 = 0;

    //carta2
    char estado2 [10] = "NB";
    char card_code2 [10] = "A02";
    char cidade2 [30] = "NaoseAplica";
    int populacao2 = 0, turismo2 = 0;
    float area2 = 0, pib2 = 0;

  // Área para entrada de dados
    printf("Olá! Seja bem vindo ao sistema de cadastramento de cartas do Super Trunfo!\n");

    //iniciando o cadastro da primeira carta.
    printf("Cadastre a primeira carta. \n");

    printf("Insira o estado: ");
    scanf("%s", estado1);

    printf("Registre o código da carta: ");
    scanf("%s", card_code1);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Insira a população: ");
    scanf("%i", &populacao1);

    printf("Insira o número de pontos turísticos: ");
    scanf("%i", &turismo1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Insira o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib1);

     //iniciando o cadastro da segunda carta.
    printf("Cadastre a segunda carta. \n");

    printf("Insira o estado: ");
    scanf("%s", estado2);

    printf("Registre o código da carta: ");
    scanf("%s", card_code2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira a população: ");
    scanf("%i", &populacao2);

    printf("Insira o número de pontos turísticos: ");
    scanf("%i", &turismo2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib2);

  // Área para exibição dos dados da cidade
    printf("\nCarta 1.\n");
    printf("Estado: %s", estado1);
    printf("\nCódigo: %s", card_code1);
    printf("\nCidade: %s", cidade1);
    printf("\nPopulação: %i", populacao1);
    printf("\nNº de pontos turísticos: %i", turismo1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: R$ %.2f BI\n", pib1);

    printf("\nCarta 2.\n");
    printf("Estado: %s", estado2);
    printf("\nCódigo: %s", card_code2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulação: %i", populacao2);
    printf("\nNº de pontos turísticos: %i", turismo2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: R$ %.2f BI\n", pib2);

return 0;

} 
