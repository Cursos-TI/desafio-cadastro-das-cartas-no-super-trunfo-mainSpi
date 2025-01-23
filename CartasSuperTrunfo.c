#include <stdio.h>

int main(int argc, char const *argv[])
{
    // inicializando as variáveis com algo para limpar a memória
    char estado = 'A'; // A - H
    char codigoCarta[] = "A01"; // 01 - 04
    char nomeCidade[50] = "";
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int numPontosTuristicos = 0;

    printf("--- Cadastro de cartas ---\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: ");
    scanf(" %s", codigoCarta); // arrays não precisam de um pointer. mesma coisa que dizer &codigoCarta[0]

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade); // permite entrar nomes com espaços em branco

    printf("Digite a população: ");
    scanf(" %d", &populacao);

    printf("Digite a área: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos);

    float pibPerCapta = pib * 1000000000 / populacao;
    float densidadePop = populacao / area;

    printf("\n--- Cadastro concluído ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePop);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per Capita: %d reais\n", (int) pibPerCapta); // o desafio quer um numero sem casas decimais na resposta
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

    return 0;
}
