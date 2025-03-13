#include <stdio.h>
#include <string.h>

int main()
{
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

    printf("************\n");
    printf("SUPER TRUNFO\n");
    printf("************\n");

    // Cadastrando a primeira carta
    printf("Digite o nome de um Estado? ");
    fgets(cidade1, 49, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Qual a populacao? ");
    scanf("%d", &populacao1);

    printf("Qual a area do Estado? ");
    scanf("%f", &area1);

    printf("Qual o PIB? ");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos do Estado? ");
    scanf("%d", &pontosturisticos1);
    getchar();

    // Cadastrando a segunda carta
    printf("Digite o nome de um Estado? ");
    fgets(cidade2, 49, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Qual a populacao? ");
    scanf("%d", &populacao2);

    printf("Qual a area do Estado? ");
    scanf("%f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Qual o numero de pontos turisticos do Estado? ");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1; // Como o pib está em bilhões multiplica por bilhão
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Imprimindo a primeira carta
    printf("Primeira carta cadastrada\n");
    printf("-------------------------\n");

    printf("Carta 1\n");
    printf("Estado A\n");
    printf("Codigo: A01\n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    // Imprimindo a segunda carta
    printf("Segunda carta cadastrada\n");
    printf("-------------------------\n");

    printf("Carta 2\n");
    printf("Estado B\n");
    printf("Codigo: B02\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    return 0;
}