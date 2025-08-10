#include <stdio.h>

int main() {

    char estado[] = "A";
    char codigo_da_carta[] = "A01";
    char Nome_da_Cidade[] = "São Paulo";
    int População = 12325000;
    float Area = 1521.0;
    float Pib = 699280000000.0;
    int Numero_de_pontos_Turisticos = 50;

    char estado2[] = "B";
    char codigo_da_carta2[] = "B02";
    char Nome_da_Cidade2[] = "Rio de Janeiro";
    int População2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300000000000.50;
    int Numero_de_pontos_Turisticos2 = 30; 

    printf("Estado: %s\n ", estado);
    printf("Código da Carta: %s\n ", codigo_da_carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n -", Area);
    printf("PIB: R$ %.2f bilhões R$\n ", Pib);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_Turisticos);

    printf("\n\n"); 

    printf("Estado: %s\n ", estado2);
    printf("Código da Carta: %s\n ", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f km²\n -", Area2);
    printf("PIB: R$ %.2f bilhões R$\n ", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_Turisticos2);
    
return 0;

}