#include <stdio.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Teste Jamily Morais de Lima


int main() {
    // Definição das variáveis para armazenar os atributos das cidades
    char estado = 'A';
    char codigo[20] = 'A01';
    char nome[50] = "fortaleza";
    int populacao = 4.6845;
    float area = 459.87;
    double pib = 567;
    int pontos_turisticos = 60;

    // Apresentação, orientação e solicitação dos dados ao usuário
    printf("Olá, gamers! Vamos começar o nosso jogo?\n\n");

    printf("Nesse primeiro momento, vamos cadastrar duas cartas do Super Trunfo\n\n");

    printf("Insira as informações sobre as cidades, ao digitar os campos com números, digitando apenas o número, sem virgulas ou pontos.\n\n");

    printf("Vamos lá?\n\n");

    print("Carta 01:");

    printf("Escolha uma letra, de A a H, para representar o primeiro Estado: ");
    scanf("%d", &estado);

    printf("Escolha um número de 01 a 04 para o código da carta: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome); // Lê o nome da cidade, incluindo espaços

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos_turisticos);


    print("Carta 02:");

    printf("Escolha uma letra, de A a H, para representar o primeiro Estado: ");
    scanf("%d", &estado);

    printf("Escolha um número de 01 a 04 para o código da carta: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome); // Lê o nome da cidade, incluindo espaços

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nEsses são os dados da cidade cadastrada:\n");
    printf("Estado: %d\n", estado);
    printf("Código: %d\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Número de Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
