#include <stdio.h>

int main(void) {

    //colocando o nome das variaveis dos paises
float Populacao;
    float Area;
    float PIB;
    char Turismo[50];
    
//utilizando printf e scanf para o usuario digitar o que é necessário.
    printf("Digite a populacao do Brasil: \n");
    scanf("%f", &Populacao);

    printf("Digite a area em KM do Brasil: \n");
    scanf("%f", &Area);

    printf("Digite o PIB do Brasil: \n");
    scanf("%f", &PIB);

     //DESAFIO 2: NÍVEL AVENTUREIRO: CALCULANDO DENSIDADE POPULACIONAL E PIB DO PRIMEIRO PAÍS

    float DensidadePopulacional;
    float PIBperCapita;

    DensidadePopulacional = Populacao / Area;
    printf("Densidade Populacional do Brasil: %f \n", DensidadePopulacional);

    PIBperCapita = PIB / Populacao;
    printf("Pib per Capita do Brasil: %f \n", PIBperCapita);

    printf("Digite um ponto turistico do Brasil: \n");
    scanf("%s", Turismo);

    float POPULACAO;
    float AREA;
    float Pib;
    char TURISMO[50];

    printf("Digite a populacao da Espanha: \n");
    scanf("%f", &POPULACAO);

    printf("Digite a area em KM da Espanha: \n");
    scanf("%f", &AREA);

    printf("Digite o PIB da Espanha: \n");
    scanf("%f", &Pib);

    //DESAFIO 2: NÍVEL AVENTUREIRO: CALCULANDO DENSIDADE POPULACIONAL E PIB DO SEGUNDO PAÍS

    float DENSIDADEPOPULACIONAL;
    float PIBPERCAPITA;

    DENSIDADEPOPULACIONAL = POPULACAO / Pib;
    printf("Densidade Populacional da Espanha: %f \n", DENSIDADEPOPULACIONAL);

    PIBPERCAPITA = Pib / POPULACAO;
    printf("Pib per Capita da Espanha: %f \n", PIBPERCAPITA);

    printf("Digite um ponto turistico da Espanha: \n");
    scanf("%s", TURISMO);
    //utilizando printf com as variaveis diferentes para poder mostrar em ordem o que foi digitado pelo usuário
    //NÍVEL AVENTUREIRO: também colocando a densidade populacional e PIB per Capita de cada país
    printf("Populacao do Brasil: %f - Area do Brasil: %f - PIB do Brasil: %f - Ponto turistico do Brasil: %s - Densidade Populacional do Brasil: %f - PIB per Capita do Brasil: %f \n", Populacao, Area, PIB, Turismo, DensidadePopulacional, PIBperCapita);
    printf("Populacao da Espanha: %f - Area da Espanha: %f - PIB da Espanha: %f - Ponto turistico da Espanha: %s - Densidade Populacional da Espanha: %f - PIB per Capita da Espanha: %f \n", POPULACAO, AREA, Pib, TURISMO, DENSIDADEPOPULACIONAL, PIBPERCAPITA);

    return 0;
}
