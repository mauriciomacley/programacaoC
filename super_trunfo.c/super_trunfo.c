#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    scanf("%*c");
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Entrada Carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    scanf("%*c");
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos cata 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações (0 = Carta 2 venceu, 1 = Carta 1 venceu)
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compPontos = pontosTuristicos1 > pontosTuristicos2;
    int compDensidade = densidade1 < densidade2;
    int compPIBpc = pibPerCapita1 > pibPerCapita2;
    int compSuper = superPoder1 > superPoder2;

    // Exibção das comparaçõe
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", compPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", compArea);
    printf("PIB: Carta 1 venceu (%d)\n", compPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compPIBpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", compSuper);

    return 0;
}
