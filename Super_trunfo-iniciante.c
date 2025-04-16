#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char Estado1;
    char Codigo1[20];
    char Cidade1[60];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // Variáveis para Carta 2
    char Estado2;
    char Codigo2[20];
    char Cidade2[60];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    // Entrando com os dados para Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &Estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", Codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Populacao: ");
    scanf("%d", &Populacao1);
    printf("Area (em km²): ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &Pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);

    // Entrando com os dados para Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &Estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", Codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Populacao: ");
    scanf("%d", &Populacao2);
    printf("Area (em km²): ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &Pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", PontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}