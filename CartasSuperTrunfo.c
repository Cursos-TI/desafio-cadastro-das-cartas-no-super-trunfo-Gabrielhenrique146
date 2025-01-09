#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char A01[50]; //Nome das Cidades divididos por codigos, A01, A02, B01, B02
    float P01; //População das cidades
    float pibA01; //Pib das Cidades
    int turA01; //Pontos turisticos da cidade
    float areaA01; //Area das cidades

    printf("Digite o nome da cidade A01: \n");
    scanf("%s", &A01);

    printf("Digite a população da cidade: \n");
    scanf("%f", &P01);

    printf("Digite a área da cidade: \n");
    scanf("%f", &areaA01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA01);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &turA01);

    printf("Cidade: %s \nPopulação: %f \nÁrea da cidade: %f \nPIB: %f \nPontos turisticos: %d \n", A01, P01, areaA01, pibA01, turA01);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
