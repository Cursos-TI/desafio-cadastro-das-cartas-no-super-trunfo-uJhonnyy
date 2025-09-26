#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char codigo[4];
    char nomec[50];
    int populacao;
    float area;
    float pib;
    int turismo;

        printf("Qual o Estado? ");
        scanf(" %c", &estado);

        printf("Codigo da cidade: ");
        scanf(" %3s", codigo);

        printf("Nome da Cidade: ");
        scanf(" %49s", nomec);

        printf("Populacao: ");
        scanf("%i", &populacao);

        printf("Area: ");
        scanf("%f", &area);

        printf("PIB da cidade: ");
        scanf("%f", &pib);

        printf("Quantos pontos turísticos? ");
        scanf("%i", &turismo);

        char estado2;
        char codigo2[4];
        char nomec2[50];
        int populacao2;
        float area2;
        float pib2;
        int turismo2;

            printf("Qual o segundo Estado? ");
            scanf(" %c", &estado2);

            printf("Codigo da segunda cidade: ");
            scanf(" %3s", codigo2);

            printf("Nome da segunda Cidade: ");
            scanf(" %49s", nomec2);

            printf("Populacao da segunda carta: ");
            scanf("%i", &populacao2);

            printf("Area da segunda cidade: ");
            scanf("%f", &area2);

            printf("PIB da segunda cidade: ");
            scanf("%f", &pib2);

            printf("Quantos pontos turísticos na carta 2? ");
            scanf("%i", &turismo2);

        float densidadepopulacional1, pibpercapita1;
        float densidadepopulacional2, pibpercapita2;

        densidadepopulacional1 = (float) populacao / area;
        pibpercapita1 = (float) pib / populacao;

        densidadepopulacional2 = (float) populacao2 / area2;
        pibpercapita2 = (float) pib2 / populacao2;

        float Superpoder1, Superpoder2;

        Superpoder1 = (float)(populacao + area + pib + turismo + pibpercapita1 + (1/densidadepopulacional1));
        Superpoder2 = (float)(populacao2 + area2 + pib2 + turismo2 + pibpercapita2 + (1/densidadepopulacional2));

        float resultadopopulacao, resultadoarea, resultadopib, resultadodensidadepopulacional, resultadopibpercapita, resultadopontosturisticos ,resultadosuperpoder;

        resultadopopulacao = populacao > populacao2;
        resultadoarea = area > area2;
        resultadopib = pib > pib2;
        resultadodensidadepopulacional = densidadepopulacional1 < densidadepopulacional2;
        resultadopibpercapita = pibpercapita1 > pibpercapita2;
        resultadopontosturisticos = turismo > turismo2;
        resultadosuperpoder = Superpoder1 > Superpoder2;


        printf("Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nomec);
        printf("Populacao: %d\n", populacao);
        printf("Area: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Pontos Turisticos: %i\n", turismo);
        printf("Densidade Populacional é: %.2f\n", densidadepopulacional1);
        printf("PIB per capita é: %.2f\n", pibpercapita1);
        printf("Superpoder da Carta 1: %.2f\n", Superpoder1);

        printf("Carta 2:\n");
        printf("Estado: %c \n", estado2);
        printf("Codigo: %s \n", codigo2);
        printf("Nome da Cidade: %s \n", nomec2);
        printf("Populacao: %d \n", populacao2);
        printf("Area: %f \n", area2);
        printf("PIB: %f \n", pib2);
        printf("Pontos Turisticos: %i \n", turismo2);
        printf("Densidade Populacinal é: %.2f\n", densidadepopulacional2);
        printf("PIB per capita é: %.2f\n", pibpercapita2);
        printf("Superpoder da Carta 2: %.2f\n", Superpoder2);

            printf("Populacao: %.f\n", resultadopopulacao);
            printf("Area: %.2f\n", resultadoarea);
            printf("PIB: %.2f\n", resultadopib);
            printf("Densidade populacional: %.2f\n", resultadodensidadepopulacional);
            printf("PIB per capita: %.2f\n", resultadopibpercapita);
            printf("Pontos Turisticos: %.2f\n", resultadopontosturisticos);
            printf("Super poder: %.2f\n", resultadosuperpoder);


    return 0;
}