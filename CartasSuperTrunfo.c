#include <stdio.h>

int main() {

    char cidade[100], codigo[50], cidade02[101], codigo02[51];  // Nome da cidade (com espaços)
    double populacao, populacao02;   // População da cidade
    double area, area02;        // Área da cidade
    double pib, pib02, resultado;         // PIB da cidade
    double densidade, pib_per_capita, densidade02, pib_per_capita02;  // Resultados dos cálculos
    int pontos_turisticos, pontos_turisticos02; //Pontos Turisticos

    // Entrada de dados Primeira carta
    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);  // Lê o nome da cidade, incluindo espaços

    printf("Digite o Código da sua carta: "); // Lê o codigo da cidade
    scanf("%s", codigo);

    printf("Digite a população da cidade: ");
    scanf("%lf", &populacao);  // A população da cidade

    printf("Digite a área da cidade: ");
    scanf("%lf", &area);  // A área da cidade

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);  // O PIB da cidade

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculos
    densidade = populacao / area;  // Densidade populacional
    pib_per_capita = pib / populacao;  // PIB per capita

    // Limpar o buffer para evitar problemas com fgets
    while (getchar() != '\n');

    // Entrada de dados Segunda Carta
    printf("*** Digite a Segunda Carta\n");//Usuario insere os valores da segunda carta

    printf("Digite o nome da cidade: ");
    fgets(cidade02, sizeof(cidade02), stdin);

    printf("Digite o Código da sua carta: "); // Lê o codigo da cidade
    scanf("%s", codigo02);

    printf("Digite a população da cidade: ");
    scanf("%lf", &populacao02);  // A população da cidade

    printf("Digite a área da cidade: ");
    scanf("%lf", &area02);  // A área da cidade

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib02);  // O PIB da cidade

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos02);  // Leitura correta para pontos turisticos

    // Cálculos Segunda Carta
    densidade02 = populacao02 / area02;  // Densidade populacional
    pib_per_capita02 = pib02 / populacao02;  // PIB per capita

    // Exibição dos resultados
    printf("Código da cidade: \n %s", codigo); //codigo da cidade
    printf("Resultado para a cidade:\n %s", cidade);  // Nome da cidade com espaços
    printf("Densidade populacional: %.2lf habitantes por km²\n", densidade); // mostra o resultado do cálculo
    printf("PIB per capita: %.2lf reais\n", pib_per_capita); // mostra o resultado do cálculo
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("*** Resultados Segunda Carta\n***");

    printf("Código da cidade: \n %s", codigo02); //codigo da cidade
    printf("Resultado para a cidade: \n %s", cidade02);  // Nome da cidade com espaços
    printf("Densidade populacional: %.2lf habitantes por km²\n", densidade02); // mostra o resultado do cálculo
    printf("PIB per capita: %.2lf reais\n", pib_per_capita02); // mostra o resultado do cálculo
    printf("Pontos turísticos: %d\n", pontos_turisticos02);

    // Critério para determinar a "cidade vencedora"
    printf("*** Resultado de quem ganhou***\n");

    if (densidade > densidade02 && pib_per_capita > pib_per_capita02) {
        printf("A cidade %s é a vencedora!\n", cidade);
    } else if (densidade02 > densidade && pib_per_capita02 > pib_per_capita) {
        printf("A cidade %s é a vencedora!\n", cidade02);
    } else {
        printf("Nenhuma cidade venceu claramente. Empate!\n");
    }

    return 0;
}
