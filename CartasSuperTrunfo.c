#include <stdio.h>


//Programação de um sistema de cadastramento de cartas de um jogo de Super Trunfo de países - nível mestre.

int main () {

    //Declaração das variáveis.

    //carta1
    char estado_1 [10] = "NA";
    char card_code_1 [10] = "A01";
    char cidade_1 [30] = "NaoAplica";
    unsigned long int populacao_1 = 0;
    int turismo_1 = 0;
    float area_1 = 0, pib_1 = 0, pib_pc_1 = 0, dens_pop_1 = 0, super_1 = 0;

    //carta2
    char estado_2 [10] = "NA";
    char card_code_2 [10] = "A02";
    char cidade_2 [30] = "NaoAplica";
    unsigned long int populacao_2 = 0;
    int turismo_2 = 0;
    float area_2 = 0, pib_2 = 0, pib_pc_2 = 0, dens_pop_2 = 0, super_2 = 0;
    
    //iniciando a impressão no terminal para coleta dos dados das cartas.
    printf("Olá! Seja bem vindo ao jogo de cartas do Super Trunfo de cidades!\n");

    //iniciando o cadastro da primeira carta.
    printf("\nCadastre a primeira carta. \n");

    printf("Insira o estado: ");
    scanf("%s", estado_1);

    printf("Registre o código da carta: ");
    scanf("%s", card_code_1);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Insira a população: ");
    scanf("%lu", &populacao_1);

    printf("Insira o número de pontos turísticos: ");
    scanf("%i", &turismo_1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Insira o PIB (Produto Interno Bruto, em bilhões de reais): ");
    scanf("%f", &pib_1);


     //iniciando o cadastro da segunda carta.
    printf("\nCadastre a segunda carta. \n");

    printf("Insira o estado: ");
    scanf("%s", estado_2);

    printf("Registre o código da carta: ");
    scanf("%s", card_code_2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade_2);

    printf("Insira a população: ");
    scanf("%lu", &populacao_2);

    printf("Insira o número de pontos turísticos: ");
    scanf("%i", &turismo_2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Insira o PIB (Produto Interno Bruto, em bilhões de reais): ");
    scanf("%f", &pib_2);

    //calculando pib per capita e densidade populacional
    dens_pop_1 = (float) populacao_1 / area_1;
    dens_pop_2 = (float) populacao_2 / area_2;
    pib_pc_1 = (float) (pib_1 * 1000000000) / populacao_1; //adequando a entrada para a divisão correta (entrada é por exemplo 100 BI, mas precisa dividir 100000000000/pessoa)
    pib_pc_2 = (pib_2 * 1000000000) / populacao_2; //adequando a entrada para a divisão correta

    //cálculo do Super Poder
    //SOMA: população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
    super_1 = (float) populacao_1 + area_1 + pib_1 + turismo_1 + pib_pc_1 + (1/dens_pop_1); //também pode ser: ...pib_pc_1 - dens_pop_1 (o resultado da conta será diferente, mas para todos os efeitos, 
    super_2 = (float) populacao_2 + area_2 + pib_2 + turismo_2 + pib_pc_2 + (1/dens_pop_2);                                             // quanto maior a densidade, menor o super poder da carta).

    ///comparação entre as cartas (densidade: menor, melhor... resto: maior, melhor). não aguentei fazer sem o IF.
    int result_populacao = populacao_1 > populacao_2; if (result_populacao == 0) {result_populacao = 2;}
    int result_turismo = turismo_1 > turismo_2; if (result_turismo == 0) {result_turismo = 2;}
    int result_area = area_1 > area_2; if (result_area == 0) {result_area = 2;}
    int result_pib = pib_1 > pib_2; if (result_pib == 0) {result_pib = 2;}
    int result_densidade = dens_pop_1 < dens_pop_2; if (result_densidade == 0) {result_densidade = 2;}
    int result_pib_pc = pib_pc_1 > pib_pc_2; if (result_pib_pc == 0) {result_pib_pc = 2;}
    int result_super = super_1 > super_2; if (result_super == 0) {result_super = 2;}

    //imprimindo as informações coletadas.
    printf("\nCarta 1.");
    printf("\nEstado: %s", estado_1);
    printf("\nCódigo: %s", card_code_1);
    printf("\nCidade: %s", cidade_1);
    printf("\nPopulação: %lu", populacao_1);
    printf("\nNº de pontos turísticos: %i", turismo_1);
    printf("\nÁrea: %.2f km²", area_1);
    printf("\nPIB: R$ %.2f BI", pib_1);
    printf("\nDensidade populacional: %.2f hab/km²", dens_pop_1);
    printf("\nPIB per capita: R$ %.2f", pib_pc_1);
    printf("\nSuper Poder 1: %.2f\n", super_1);    

    printf("\nCarta 2.");
    printf("\nEstado: %s", estado_2);
    printf("\nCódigo: %s", card_code_2);
    printf("\nCidade: %s", cidade_2);
    printf("\nPopulação: %lu", populacao_2);
    printf("\nNº de pontos turísticos: %i", turismo_2);
    printf("\nÁrea: %.2f km²", area_2);
    printf("\nPIB: R$ %.2f BI", pib_2);
    printf("\nDensidade populacional: %.2f hab/km²", dens_pop_2);
    printf("\nPIB per capita: R$ %.2f", pib_pc_2);
    printf("\nSuper Poder 2: %.2f\n", super_2);

    //imprimindo os resultados
    printf("\nComparação de cartas:\n");
    printf("População: a Carta %i venceu.\n", result_populacao);
    printf("Nº de pontos turísticos: a Carta %i venceu.\n", result_turismo);
    printf("Área da cidade: a Carta %i venceu.\n", result_area);
    printf("PIB: a Carta %i venceu.\n", result_pib);
    printf("Densidade populacional: a Carta %i venceu.\n", result_densidade);
    printf("PIB per capita: a Carta %i venceu.\n", result_pib_pc);
    printf("Super Poder: a Carta %i venceu.\n", result_super);

    return 0;
    
}