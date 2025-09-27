#include <stdio.h>
#include <locale.h> // Biblioteca que possibilita o uso de acentos.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    setlocale(LC_ALL, ""); // Permite o uso de acentos no programa.
    setlocale(LC_NUMERIC, "C"); // Permite o uso de ponto como separador decimal.

    // Declaração de variáveis carta A

    char estado, codigo[4], nome_cidade[15];
    int populacao, pontos_turisticos;
    float area, pib;

    // Entrada de dados carta A

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Número populacional: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n"); // Imprime um espaço invisível no terminal.

     // Declaração de variáveis carta B

    char estado2, codigo2[4], nome_cidade2[15];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Entrada de dados carta B

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Número populacional: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n\n\n\n"); // Imprime um espaço invisível no terminal.

    // Impressão de dados no terminal.

    printf("Carta1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nNúmero populacional: %d\nÁrea: %.2f\nPIB: %.2f\n",
            estado, codigo, nome_cidade, populacao, area, pib);
    printf("Número de pontos turísticos: %d", pontos_turisticos);

    printf("\n\n"); // Imprime um espaço invisível no terminal.

    printf("Carta2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nNúmero populacional: %d\nÁrea: %.2f\nPIB: %.2f\n",
            estado2, codigo2, nome_cidade2, populacao2, area2, pib2);
    printf("Número de pontos turísticos: %d", pontos_turisticos2);



    return 0;
}
