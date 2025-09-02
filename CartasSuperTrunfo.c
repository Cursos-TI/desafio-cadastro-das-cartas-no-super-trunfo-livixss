#include <stdio.h>

int cartaVencedora(int comp) {
    // Retorna 1 se comp == 1, ou 2 se comp == 0
    return comp * 1 + (1 - comp) * 2;
}

int main(){

    printf("Desafio Super Trunfo! \n");

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char NomeCidade1[100], NomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2; 
    int nPontosTuristicos1, nPontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float inversoDensidade1, inversoDensidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoderC1, superPoderC2;

    // --- Entrada Carta 1 ---
    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", estado1);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", codigo1); 

    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", NomeCidade1); 

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area1);

    densidadePopulacional1 = populacao1 / area1;
    inversoDensidade1 = area1 / populacao1;

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB1);

    pibPerCapita1 = PIB1 / populacao1;

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos1);

    superPoderC1 = populacao1 + area1 + PIB1 + (float)nPontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    printf("\n");

    // --- Entrada Carta 2 ---
    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", estado2);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", codigo2); 

    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", NomeCidade2); 

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area2);

    densidadePopulacional2 = populacao2 / area2;
    inversoDensidade2 = area2 / populacao2;

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB2);

    pibPerCapita2 = PIB2 / populacao2;

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos2);

    superPoderC2 = populacao2 + area2 + PIB2 + (float)nPontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    printf("\n");

    // Saída Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", NomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f \n", pibPerCapita1);
    printf("Super Poder: %f \n", superPoderC1);

    printf("\n");

    // Saída Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", nPontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder: %f \n", superPoderC2);

    printf("\n");

    // Comparação das cartas

    int compPop = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = PIB1 > PIB2;
    int compPontosTuristicos = nPontosTuristicos1 > nPontosTuristicos2;
    int compDensidade = densidadePopulacional1 < densidadePopulacional2; // menor vence
    int compPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int compSuperPoder = superPoderC1 > superPoderC2;

    printf("População: Carta %d venceu (%d)\n", cartaVencedora(compPop), compPop);
    printf("Área: Carta %d venceu (%d)\n", cartaVencedora(compArea), compArea);
    printf("PIB: Carta %d venceu (%d)\n", cartaVencedora(compPIB), compPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cartaVencedora(compPontosTuristicos), compPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaVencedora(compDensidade), compDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", cartaVencedora(compPIBperCapita), compPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", cartaVencedora(compSuperPoder), compSuperPoder);


    return 0;
}
