#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Informações das cartas
    char estado_1, codigo_1[50], cidade_1[50], estado_2, codigo_2[50], cidade_2[50];
    unsigned long int populacao_1,populacao_2;
    float area_1, pib_1, area_2, pib_2, densid_pop_1, densid_pop_2, pib_per_capita_1, pib_per_capita_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float super_poder_1, super_poder_2, inverso_densid_1, inverso_densid_2;
    int result_populacao, result_area, result_pib, result_pontos_turisticos, 
        result_densid_pop, result_pib_per_capita, result_superpoder;
    char carta1[30] = "Carta 1";
    char carta2[30] = "Carta 2";

    // CARTA 1
    printf("------INFORMAÇÕES DA CARTA 1----- \n");
    printf("Digite a letra do estado da carta 1 (letra de A a H): ");
    scanf("%c", &estado_1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo_1);
    getchar();

    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade_1, sizeof(cidade_1), stdin);
    cidade_1[strcspn(cidade_1, "\n")] = '\0';

    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao_1);
    
    printf("Digite a área da carta 1: ");
    scanf("%f", &area_1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos_1);

    // CARTA 2
    getchar();
    printf("------INFORMAÇÕES DA CARTA 2----- \n");
    printf("Digite a letra do estado da carta 2 (letra de A a H): ");
    scanf("%c", &estado_2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo_2);
    getchar();

    printf("Digite o nome da cidade da carta 2: ");
    fgets(cidade_2, sizeof(cidade_2), stdin);
    cidade_2[strcspn(cidade_2, "\n")] = '\0';

    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao_2);
    
    printf("Digite a área da cidade 2: ");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turisticos da cidade 2: ");
    scanf("%d", &pontos_turisticos_2);

    // Calculo da densidade populacional e do PIB per Capita
    densid_pop_1 = (float)populacao_1/area_1;
    pib_per_capita_1 = (pib_1/(float)populacao_1)*(1000000000);
    densid_pop_2 = (float)populacao_2/area_2;
    pib_per_capita_2 = (pib_2/(float)populacao_2)*(1000000000);

    // Calculo do Super Poder
    inverso_densid_1 = 1.0/densid_pop_1;
    inverso_densid_2 = 1.0/densid_pop_2;
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_per_capita_1 + inverso_densid_1;
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_per_capita_2 + inverso_densid_2;  

    // Comparação das cartas
    result_populacao = populacao_1 > populacao_2;
    result_area = area_1 > area_2;
    result_pib = pib_1 > pib_2;
    result_pontos_turisticos = pontos_turisticos_1 > pontos_turisticos_2;
    result_densid_pop = densid_pop_1 < densid_pop_2;
    result_pib_per_capita = pib_per_capita_1 > pib_per_capita_2;
    result_superpoder = super_poder_1 > super_poder_2;

    // Exibição do conteúdo das cartas
    printf(" \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_1);
    printf("Código: %s \n", codigo_1);
    printf("Nome da Cidade: %s \n", cidade_1);
    printf("População: %lu \n", populacao_1);
    printf("Área: %.2f km2 \n", area_1);
    printf("PIB: %.2f bilhoes de reais \n", pib_1);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densid_pop_1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_1);
    printf("Super Poder: %.2f \n", super_poder_1);

    printf(" \n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_2);
    printf("Código: %s \n", codigo_2);
    printf("Nome da Cidade: %s \n", cidade_2);
    printf("População: %lu \n", populacao_2);
    printf("Área: %.2f km2 \n", area_2);
    printf("PIB: %.2f bilhoes de reais \n", pib_2);
    printf("Número de Pontos Turisticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densid_pop_2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_2);
    printf("Super Poder: %.2f \n", super_poder_2);
 
    // Exibição da comparação das cartas
    printf(" \n");
    printf("-----Comparação de Cartas----- \n");
    printf("População: %s venceu (%d) \n", carta1, result_populacao);
    printf("Área: %s venceu (%d) \n", carta1, result_area);
    printf("PIB: %s venceu (%d) \n", carta1, result_pib);
    printf("Pontos Turisticos: %s venceu (%d) \n", carta1, result_pontos_turisticos);
    printf("Densidade Populacional: %s venceu (%d) \n", carta2, result_densid_pop);
    printf("PIB per capita: %s venceu (%d) \n", carta1, result_pib_per_capita);
    printf("Super Poder: %s venceu (%d) \n", carta1, result_superpoder);

    // Comparação das Cartas (Atributo: População)
    printf(" \n");
    printf("-----Comparação de Atributo: População-----) \n");
    printf("Carta 1 - %s: %lu \n", cidade_1, populacao_1);
    printf("Carta 2 - %s: %lu \n", cidade_2, populacao_2);
    if (populacao_1 > populacao_2) {
        printf("Resultado: Carta 1 - %s - venceu! \n", cidade_1);
    } else if (populacao_2 > populacao_1) {
        printf("Resultado: Carta 2 - %s - venceu! \n", cidade_2);
    } else {
        printf("Empate na população! \n");
    }

    return 0;
}
