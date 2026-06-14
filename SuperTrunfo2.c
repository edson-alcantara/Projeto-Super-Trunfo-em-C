#include <stdio.h>

int main() {

    // ==========================
    // CARTA 1
    // ==========================
    char pais1[50] = "Brasil";
    unsigned long int populacao1 = 203062512;
    float area1 = 8515767.0;
    float pib1 = 2174.0;
    int pontosTuristicos1 = 100;

    // ==========================
    // CARTA 2
    // ==========================
    char pais2[50] = "Argentina";
    unsigned long int populacao2 = 46044703;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontosTuristicos2 = 80;

    // Cálculo da densidade demográfica
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    int atributo1, atributo2;

    float valor1Carta1 = 0;
    float valor1Carta2 = 0;
    float valor2Carta1 = 0;
    float valor2Carta2 = 0;

    float somaCarta1;
    float somaCarta2;

    // ==========================
    // PRIMEIRO MENU
    // ==========================
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ==========================
    // SEGUNDO MENU DINÂMICO
    // ==========================
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: nao e permitido escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // ==========================
    // ATRIBUTO 1
    // ==========================
    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;

        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;

        case 5:
            valor1Carta1 = 1.0f / densidade1;
            valor1Carta2 = 1.0f / densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    // ==========================
    // ATRIBUTO 2
    // ==========================
    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;

        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;

        case 5:
            valor2Carta1 = 1.0f / densidade1;
            valor2Carta2 = 1.0f / densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    // ==========================
    // SOMA DOS ATRIBUTOS
    // ==========================
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    // Operador ternário
    char *vencedor =
        (somaCarta1 > somaCarta2) ? pais1 :
        (somaCarta2 > somaCarta1) ? pais2 :
        "Empate";

    // ==========================
    // RESULTADO
    // ==========================
    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    printf("\nCarta 1: %s", pais1);
    printf("\nCarta 2: %s\n", pais2);

    printf("\nSoma dos atributos da Carta 1: %.2f", somaCarta1);
    printf("\nSoma dos atributos da Carta 2: %.2f\n", somaCarta2);

    if (somaCarta1 == somaCarta2) {
        printf("\nEmpate!\n");
    } else {
        printf("\nVencedor: %s\n", vencedor);
    }

    return 0;
}