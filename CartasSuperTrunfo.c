#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char Estado1 = 'A';
    char Codigo1[20] = "A01";
    char Cidade1[20] = "São_Paulo";
    int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float Pib1 = 699.28;
    int PontosTur1 = 50;

    char Estado2 = 'B';
    char Codigo2[20] = "A02";
    char Cidade2[20] = "Rio_de_Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300.50;
    int PontosTur2 = 30;  

    // CARTA 1

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &Pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d\n", &PontosTur1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n\n", PontosTur1);

    // CARTA 2

    printf("Digite a letra do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &Pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d\n", &PontosTur2);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTur2);

    return 0;

}