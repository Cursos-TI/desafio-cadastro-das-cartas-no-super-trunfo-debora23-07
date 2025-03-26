#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

int Populacao;
    float Area;
    float PIB;
    int Turismo;

    printf("Digite a populacao do Brasil: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em KM do Brasil: \n");
    scanf("%f", &Area);

    printf("Digite o PIB do Brasil: \n");
    scanf("%f", &PIB);

    printf("Digite um ponto turistico do Brasil: \n");
    scanf("%d", &Turismo);

    int POPULACAO;
    float AREA;
    float Pib;
    int TURISMO;

    printf("Digite a populacao da Espanha: \n");
    scanf("%d", &POPULACAO);

    printf("Digite a area em KM da Espanha: \n");
    scanf("%f", &AREA);

    printf("Digite o PIB da Espanha: \n");
    scanf("%f", &Pib);

    printf("Digite um ponto turistico da Espanha: \n");
    scanf("%d", &TURISMO);
    
    printf("Populacao do Brasil: %d - Area do Brasil: %f - PIB do Brasil: %f - Ponto turistico do Brasil: %d \n", Populacao, Area, PIB, Turismo);
    printf("Populacao da Espanha: %d - Area da Espanha: %f - PIB da Espanha: %f - Ponto turistico da Espanha: %d \n", POPULACAO, AREA, Pib, TURISMO);

    return 0;
}
