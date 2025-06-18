#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo!");

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char NomeCidade1[100], NomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2; 
    int nPontosTuristicos1, nPontosTuristicos2;

    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", &estado1);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", &codigo1);; 
    
    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", &NomeCidade1); //ele irá ler todos os caracteres até chegar na quebra de linha.

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos1);
    printf("\n");

    //carta numero 2
 
    char ;
    char ;
    char ;
    int ;
    float ;
    float ; 
    int ;

    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", &estado2);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", &codigo2);; 
    
    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", &NomeCidade2); 

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos2);
    printf("\n");

    printf("Carta 1: \n");
    printf("EStado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", NomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n", nPontosTuristicos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("EStado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", nPontosTuristicos2);

    return 0;
}

