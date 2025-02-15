#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Jamily Morais de Lima


int main() {
    // Definição das variáveis para armazenar os atributos das cidades
    int codigo = 1234;
    char nome[50] = "fortaleza";
    int populacao = 4.6845;
    float area = 459.87;
    double pib = 567;
    int pontos_turisticos = 60;

    // Apresentação, orientação e solicitação dos dados ao usuário
    printf("Olá, gamers! Vamos começar o nosso jogo?\n\n");

    printf("Insira as informações sobre a cidade e, ao digitar os campos com números, digite apenas o número, sem virgulas ou pontos.\n\n");

    printf("Então, vamos lá!!!\n\n");

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome); // Lê o nome da cidade, incluindo espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nEsses são os dados da cidade cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
