#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char Variavel1 = 'A';
    char Variavel2[20] = "A01";
    char Variavel3[20] = "São Paulo";
    int Variavel4 = 12325000;
    float Variavel5 = 1521.11;
    float Variavel6 = 699.28;
    int Variavel7 = 50;

    char Variavel8 = 'B';
    char Variavel9[20] = "A02";
    char Variavel10[20] = "Rio de Janeiro";
    int Variavel11 = 6748000;
    float Variavel12 = 1200.25;
    float Variavel13 = 300.50;
    int Variavel14 = 30;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Variavel1);
    printf("Código: %s\n", Variavel2);
    printf("Nome da Cidade: %s\n", Variavel3);
    printf("População: %d\n", Variavel4);
    printf("Área: %.2f km²\n", Variavel5);
    printf("PIB: %.2f bilhões de reais\n", Variavel6);
    printf("Número de Pontos Turísticos: %d\n\n", Variavel7);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", Variavel8);
    printf("Código: %s\n", Variavel9);
    printf("Nome da Cidade: %s\n", Variavel10);
    printf("População: %d\n", Variavel11);
    printf("Área: %.2f km²\n", Variavel12);
    printf("PIB: %.2f bilhões de reais\n", Variavel13);
    printf("Número de Pontos Turísticos: %d\n", Variavel14);

    return 0;
}
