#include <stdio.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Teste Jamily Morais de Lima

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    float populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Entrada de dados para a primeira carta
    printf("Olá, gamers! Vamos jogar?\n");
    printf("Vamos começar cadastrando as cartas do nosso jogo\n");
    printf("Nos campos numéricos, digite apenas os números, sem ponto ou vírgula.\n\n");

    printf("Digite uma letra para representar a primeira carta (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); //leitura de nomes compostos
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores para a primeira cidade
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para reais

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Entrada de dados para a segunda carta
    printf("\nAgora vamos para a segunda carta?!\n\n");

    printf("Digite uma letra para representar a segunda carta (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); //leitura de nomes compostos
    printf("Digite a população da cidade: ");
    scanf("%f", &populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores para a segunda cidade
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB de bilhões para reais

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}