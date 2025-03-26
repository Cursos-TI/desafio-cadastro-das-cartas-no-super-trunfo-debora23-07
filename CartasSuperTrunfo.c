#include <stdio.h>

int main() {

    //colocando o nome das variaveis dos paises
int Populacao;
    float Area;
    float PIB;
    int Turismo;
//utilizando printf e scanf para o usuario digitar o que é necessário 
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
    //utilizando printf com as variaveis diferentes para poder mostrar em ordem o que foi digitado pelo usuário
    printf("Populacao do Brasil: %d - Area do Brasil: %f - PIB do Brasil: %f - Ponto turistico do Brasil: %d \n", Populacao, Area, PIB, Turismo);
    printf("Populacao da Espanha: %d - Area da Espanha: %f - PIB da Espanha: %f - Ponto turistico da Espanha: %d \n", POPULACAO, AREA, Pib, TURISMO);

    return 0;
}
