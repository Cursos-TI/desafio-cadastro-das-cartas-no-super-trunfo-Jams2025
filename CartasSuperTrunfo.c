#include <stdio.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Teste Jamily Morais de Lima

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 = "A";
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "são paulo";
    int populacao1 = 83764;
    float area1 = 4876;
    float pib1 = 9847;
    int pontosTuristicos1 = 50;

    // Entrada de dados para a primeira carta

    printf("Olá, gamers! Vamos jogar?\n");

    printf("Vamos começar cadastrando as cartas do nosso jogo\n");

    printf("Nos campos númericos digite apenas os números, sem ponto ou virgula\n\n");

    printf("Digite uma letra para representar a primeira carta, de A a H: ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a segunda carta
    printf("\nAgora vamos para a segunda carta?!\n\n");

    printf("\nDigite uma letra para representar a segunda carta, de A a H: ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
