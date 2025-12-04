#include <stdio.h>

int main() {

    char estados[8] = {'A','B','C','D','E','F','G','H'};
    int populacao[8][4];
    float area[8][4];
    float pib[8][4];
    int pontos[8][4];

    printf("=== SUPER TRUNFO - PAISES (NIVEL NOVATO) ===\n");

    // Cadastro das cartas
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 4; j++) {

            printf("\n--- Cadastro da carta %c0%d ---\n", estados[i], j+1);

            printf("Populacao: ");
            scanf("%d", &populacao[i][j]);

            printf("Area (km2): ");
            scanf("%f", &area[i][j]);

            printf("PIB (em bilhoes): ");
            scanf("%f", &pib[i][j]);

            printf("Numero de pontos turisticos: ");
            scanf("%d", &pontos[i][j]);
        }
    }

    // Exibição das cartas
    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 4; j++) {

            printf("\n--- Carta %c0%d ---\n", estados[i], j+1);
            printf("Populacao: %d\n", populacao[i][j]);
            printf("Area: %.2f km2\n", area[i][j]);
            printf("PIB: %.2f bilhoes\n", pib[i][j]);
            printf("Pontos turisticos: %d\n", pontos[i][j]);
        }
    }

    return 0;
}
