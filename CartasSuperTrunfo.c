#include <stdio.h>

int main() {

    char cidade[100], codigo[50];  // Nome da cidade (com espaços)
    float populacao;   // População da cidade
    float area;        // Área da cidade
    float pib;         // PIB da cidade
    float densidade, pib_per_capita;  // Resultados dos cálculos
    int pontos_turisticos; //Pontos Turisticos

    // Entrada de dados
    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);  // Lê o nome da cidade, incluindo espaços

    printf("Digite o Código da sua carta: "); // Lê o codigo da cidade
    scanf("%s", &codigo);

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);  // A população da cidade

    printf("Digite a área da cidade: ");
    scanf("%f", &area);  // A área da cidade

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);  // O PIB da cidade

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculos
    densidade = populacao / area;  // Densidade populacional
    pib_per_capita = pib / populacao;  // PIB per capita

    // Exibição dos resultados
    printf("Código da cidade: %s", codigo); //codigo da cidade
    printf("\nResultado para a cidade: %s", cidade);  // Nome da cidade com espaços
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade); // mostra o resultado do calculo
    printf("PIB per capita: %.2f reais\n", pib_per_capita); // mostra o resultado do calculo
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    
    return 0;
}
