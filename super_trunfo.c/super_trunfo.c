#include <stdio.h>

// Desafio Super Trunfo – Nível Mestre
// Comparação Avançada com Escolha de Dois Atributos, Menus Dinâmicos, if/else e Ternário

int main() {
    // Cartas pré-cadastradas
    char name1[] = "Brasil";
    unsigned long pop1    = 214000000UL;
    float area1           = 8515767.0f;
    float pib1            = 2.0f;    // em trilhões de reais
    int pontos1           = 150;

    char name2[] = "Argentina";
    unsigned long pop2    = 46000000UL;
    float area2           = 2780400.0f;
    float pib2            = 0.6f;    // em trilhões de reais
    int pontos2           = 85;

    // Cálculos auxiliares
    float dens1  = pop1 / area1;                            // habitantes por km²
    float dens2  = pop2 / area2;
    float pibpc1 = (pib1 * 1e12f) / pop1;                   // PIB per capita em reais
    float pibpc2 = (pib2 * 1e12f) / pop2;

    int e1, e2;
    float v1a, v2a, v1b, v2b;
    float soma1, soma2;

    // Exibe as cartas em disputa
    printf("=== Super Trunfo – Países (Nível Mestre) ===\n");
    printf("Carta 1: %s\n", name1);
    printf("Carta 2: %s\n\n", name2);

    // Menu de atributos
    printf("Atributos disponíveis:\n");
    printf(" 1. População\n");
    printf(" 2. Área (km²)\n");
    printf(" 3. PIB (trilhões de reais)\n");
    printf(" 4. Pontos Turísticos\n");
    printf(" 5. Densidade Populacional (menor vence)\n");
    printf(" 6. PIB per Capita\n\n");

    // Escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo (1-6): ");
    if (scanf("%d", &e1) != 1 || e1 < 1 || e1 > 6) {
        printf("Entrada inválida. Encerrando.\n");
        return 1;
    }

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o SEGUNDO atributo (diferente de %d):\n", e1);
    for (int i = 1; i <= 6; ++i) {
        if (i == e1) continue;
        switch (i) {
            case 1: printf(" 1. População\n"); break;
            case 2: printf(" 2. Área (km²)\n"); break;
            case 3: printf(" 3. PIB (trilhões de reais)\n"); break;
            case 4: printf(" 4. Pontos Turísticos\n"); break;
            case 5: printf(" 5. Densidade Populacional\n"); break;
            case 6: printf(" 6. PIB per Capita\n"); break;
        }
    }
    printf("Sua escolha: ");
    if (scanf("%d", &e2) != 1 || e2 < 1 || e2 > 6 || e2 == e1) {
        printf("Escolha inválida. Encerrando.\n");
        return 1;
    }

    // Atribui valores do primeiro atributo
    switch (e1) {
        case 1: v1a = pop1;   v2a = pop2;   break;
        case 2: v1a = area1;  v2a = area2;  break;
        case 3: v1a = pib1;   v2a = pib2;   break;
        case 4: v1a = pontos1;v2a = pontos2;break;
        case 5: v1a = dens1;  v2a = dens2;  break;
        case 6: v1a = pibpc1; v2a = pibpc2; break;
    }

    // Atribui valores do segundo atributo
    switch (e2) {
        case 1: v1b = pop1;   v2b = pop2;   break;
        case 2: v1b = area1;  v2b = area2;  break;
        case 3: v1b = pib1;   v2b = pib2;   break;
        case 4: v1b = pontos1;v2b = pontos2;break;
        case 5: v1b = dens1;  v2b = dens2;  break;
        case 6: v1b = pibpc1; v2b = pibpc2; break;
    }

    // Soma dos valores escolhidos
    soma1 = v1a + v1b;
    soma2 = v2a + v2b;

    // Exibe resultados individuais
    printf("\n--- Resultados por Atributo ---\n");
    printf("Atributo %d: %.2f x %.2f -> %s venceu\n",
           e1, v1a, v2a,
           (e1 == 5
               ? (v1a < v2a ? name1 : name2)
               : (v1a > v2a ? name1 : name2))
    );
    printf("Atributo %d: %.2f x %.2f -> %s venceu\n",
           e2, v1b, v2b,
           (e2 == 5
               ? (v1b < v2b ? name1 : name2)
               : (v1b > v2b ? name1 : name2))
    );

    // Exibe soma e resultado final
    printf("\n--- Resultado Final ---\n");
    printf("%s: Soma = %.2f\n", name1, soma1);
    printf("%s: Soma = %.2f\n", name2, soma2);

    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", name1);
    } else if (soma2 > soma1) {
        printf("\n%s venceu a rodada!\n", name2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}

